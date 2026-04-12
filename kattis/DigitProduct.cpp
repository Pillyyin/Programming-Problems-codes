#include <bits/stdc++.h>
using namespace std;
int main() {
    int x;
    cin >> x;
    
    while(x > 9){        // x 超過一位數就繼續
        int tem = 1;    // 暫存
        while(x > 0){
            int digit = x % 10;
            if(digit != 0){
                tem *= digit;  // 跳過0
            }
            x /= 10;
        }
        x = tem;         // 乘完的結果當作新的 x
    }
    
    cout << x << "\n";
    return 0;
}