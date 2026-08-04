/* 50% 不知道怎麼改
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while(cin >> n){
        if(n == 0) break;

        string lesson[n][5];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < 5; j++)
                cin >> lesson[i][j];

        for(int i = 0; i < n; i++)
            sort(lesson[i], lesson[i]+5);

        string comb[10000];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < 5; j++)
                comb[i] += lesson[i][j];

        // 計算每個組合出現幾次
        int cnt[10000] = {0};
        for(int i = 0; i < n; i++){
            cnt[i] = 1;
            for(int j = i+1; j < n; j++){
                if(comb[i] == comb[j]) cnt[i]++;
            }
        }

    //claude code    

        // 找最大次數
        int maxcnt = 0;
        for(int i = 0; i < n; i++)
            maxcnt = max(maxcnt, cnt[i]);

        // 累加所有達到最大次數的組合的人數
        // 但要避免重複計算同一個組合
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(cnt[i] == maxcnt){
                ans += maxcnt;
                // 把相同組合標記，避免重複計算
                for(int j = i+1; j < n; j++){
                    if(comb[i] == comb[j]) cnt[j] = 0;
                }
                cnt[i] = 0;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
*/
//claude code
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while(cin >> n){
        if(n == 0) break;

        int lesson[10000][5];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 5; j++)
                cin >> lesson[i][j];
            sort(lesson[i], lesson[i]+5);
        }

        int cnt[10000] = {0};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                bool same = true;
                for(int k = 0; k < 5; k++){
                    if(lesson[i][k] != lesson[j][k]){
                        same = false;
                        break;
                    }
                }
                if(same) cnt[i]++;
            }
        }

        int maxcnt = *max_element(cnt, cnt+n);

        int ans = 0;
        bool used[10000] = {false};
        for(int i = 0; i < n; i++){
            if(cnt[i] == maxcnt && !used[i]){
                ans += maxcnt;
                for(int j = i; j < n; j++){
                    bool same = true;
                    for(int k = 0; k < 5; k++){
                        if(lesson[i][k] != lesson[j][k]){
                            same = false;
                            break;
                        }
                    }
                    if(same) used[j] = true;
                }
            }
        }

        cout << ans << "\n";
    }
    return 0;
}