//AI
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while(cin >> n){
        int num[n];
        bool seen[n]; //判斷array
        for(int i = 0; i < n; i++){
            cin >> num[i];
            seen[i] = false; //先RESET
        }

        bool jolly = true;
        for(int i = 0; i < n-1; i++){
            int diff = abs(num[i+1] - num[i]);  // 計算差值
            if(diff < 1 || diff > n-1){          // 差值超出範圍
                jolly = false;
            }else{
                seen[diff] = true;               // 標記此差值出現過
            }
        }

        for(int i = 1; i <= n-1; i++){           // 檢查1~n-1全部出現
            if(!seen[i]){
                jolly = false;
                break;
            }
        }

        cout << (jolly ? "Jolly" : "Not jolly") << "\n";
    }
    return 0;
}
