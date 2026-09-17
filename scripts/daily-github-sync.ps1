[CmdletBinding()]
param(
    [string]$RepositoryPath = (Split-Path -Parent $PSScriptRoot),
    [string]$Remote = 'origin',
    [string]$Branch = 'main'
)

$ErrorActionPreference = 'Stop'

function Write-SyncLog {
    param([string]$Message)

    $line = '[{0:yyyy-MM-dd HH:mm:ss}] {1}' -f (Get-Date), $Message
    Add-Content -LiteralPath $script:LogFile -Value $line -Encoding utf8
    Write-Host $line
}

function Invoke-Git {
    param([Parameter(ValueFromRemainingArguments = $true)][string[]]$Arguments)

    Write-SyncLog ('COMMAND: git ' + ($Arguments -join ' '))
    $output = & git @Arguments 2>&1
    foreach ($line in $output) {
        Write-SyncLog "OUTPUT: $line"
    }
    if ($LASTEXITCODE -ne 0) {
        throw "git $($Arguments -join ' ') failed with exit code $LASTEXITCODE."
    }
}

try {
    if (-not (Get-Command git -ErrorAction SilentlyContinue)) {
        throw 'Git was not found in PATH.'
    }

    $RepositoryPath = (Resolve-Path -LiteralPath $RepositoryPath).Path
    if (-not (Test-Path -LiteralPath (Join-Path $RepositoryPath '.git'))) {
        throw "Not a Git repository: $RepositoryPath"
    }

    $logDirectory = Join-Path $RepositoryPath '.github-sync'
    New-Item -ItemType Directory -Force -Path $logDirectory | Out-Null
    $script:LogFile = Join-Path $logDirectory 'daily-github-sync.log'
    $today = Get-Date -Format 'yyyy-MM-dd'

    Push-Location $RepositoryPath
    Write-SyncLog "Starting daily C++ sync for $today."

    # Stage only C++ source files, including additions, edits, renames, and deletions.
    Invoke-Git add -A -- '*.cpp'
    & git diff --cached --quiet
    if ($LASTEXITCODE -eq 0) {
        Write-SyncLog 'No changed C++ files to commit; nothing was pushed.'
        exit 0
    }
    if ($LASTEXITCODE -ne 1) {
        throw "git diff --cached --quiet failed with exit code $LASTEXITCODE."
    }

    Invoke-Git commit -m "Daily C++ sync - $today"
    Invoke-Git push $Remote $Branch
    Write-SyncLog "Completed daily C++ sync for $today."
}
catch {
    if ($script:LogFile) {
        Write-SyncLog "ERROR: $($_.Exception.Message)"
    }
    else {
        Write-Error $_
    }
    exit 1
}
finally {
    if ((Get-Location).Path -eq $RepositoryPath) {
        Pop-Location
    }
}
