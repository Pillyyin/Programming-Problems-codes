//AI
#include <bits/stdc++.h>
using namespace std;
int main() {
    string num;
    getline(cin, num);

    int maxday = 0;
    int zeros = 0;
    bool leftone = false;

    for(int i = 0; i < num.size(); i++){
        if(num[i] == '0'){
            zeros++;
        }else{
            if(zeros > 0){
                // 連續0，左邊有1（leftone），右邊有1（num[i]=='1'）
                if(leftone){
                    // 兩側都有1，從兩端同時擴散
                    maxday = max(maxday, (zeros + 1) / 2);
                }else{
                    // 只有右側有1（左邊是邊界）
                    maxday = max(maxday, zeros);
                }
                zeros = 0;
            }
            leftone = true;
        }
    }

    cout << maxday << "\n";
    return 0;
}
