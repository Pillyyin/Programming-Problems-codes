[CmdletBinding()]
param(
    [ValidatePattern('^([01]\d|2[0-3]):[0-5]\d$')]
    [string]$Time = '20:00',
    [string]$TaskName = 'Daily Cpp GitHub Sync'
)

$ErrorActionPreference = 'Stop'
$syncScript = Join-Path $PSScriptRoot 'daily-github-sync.ps1'

if (-not (Test-Path -LiteralPath $syncScript)) {
    throw "Sync script was not found: $syncScript"
}

$action = New-ScheduledTaskAction -Execute 'powershell.exe' -Argument (
    '-NoProfile -ExecutionPolicy Bypass -File "{0}"' -f $syncScript
)
$trigger = New-ScheduledTaskTrigger -Daily -At $Time
$settings = New-ScheduledTaskSettingsSet -StartWhenAvailable

Register-ScheduledTask -TaskName $TaskName -Action $action -Trigger $trigger -Settings $settings `
    -Description 'Commits and pushes changed C++ source files with the current date.' -Force | Out-Null

Write-Host "Scheduled task '$TaskName' will run daily at $Time."
Write-Host "Logs are written to $(Join-Path (Split-Path -Parent $PSScriptRoot) '.github-sync\\daily-github-sync.log')."
