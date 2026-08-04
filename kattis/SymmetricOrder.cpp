#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int set = 1;
    while(cin >> n){
        if(n == 0) break;

        string top[n], bottom[n];
        int ti = 0, bi = 0;
        string tmp;

        for(int i = 0; i < n; i++){
            cin >> tmp;
            if(i % 2 == 0){
                top[ti++] = tmp;    // 偶數
            } else {
                bottom[bi++] = tmp; // 奇數
            }
        }

        cout << "SET " << set << "\n";
        for(int i = 0; i < ti; i++) cout << top[i] << "\n";
        for(int i = bi-1; i >= 0; i--) cout << bottom[i] << "\n";

        set++;
    }
    return 0;
}
