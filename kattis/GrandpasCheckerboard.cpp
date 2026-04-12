#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    char board[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> board[i][j];
        }
    }

    int B, W;
    bool correct = true; 

    // 判斷行
    for(int i=0;i<n;i++){
        B = 0;
        W = 0;
        for(int j=0;j<n;j++){
            if(board[i][j] == 'B') B++;
            else if(board[i][j] == 'W') W++;

            // 判斷連續三個
            if(j >= 2 && board[i][j] == board[i][j-1] && board[i][j] == board[i][j-2]){
                correct = false;
            }
        }
        if(B != n/2 || W != n/2) correct = false;  // 改成 !=
    }

    // 判斷列
    for(int j=0;j<n;j++){
        B = 0;
        W = 0;
        for(int i=0;i<n;i++){
            if(board[i][j] == 'B') B++;
            else if(board[i][j] == 'W') W++;

            // 判斷連續三個
            if(i >= 2 && board[i][j] == board[i-1][j] && board[i][j] == board[i-2][j]){
                correct = false;
            }
        }
        if(B != n/2 || W != n/2) correct = false;
    }

    
    cout << (correct ? 1 : 0) << "\n";
    return 0;
}