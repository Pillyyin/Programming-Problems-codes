#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;

    vector<long long> Xi(n);
    for(int i=0;i<n;i++){
        cin >> Xi[i] ;
    }

    sort(Xi.begin(), Xi.end());  //排序後用二分搜尋

    int t;
    cin >> t;

    while(t--){
        long long K;
        cin >> K;

        // 二分搜尋
        auto it = lower_bound(Xi.begin(), Xi.end(), K);

        if(it != Xi.end() && *it == K){
            cout << K << "\n";
        }else{
            bool hasA = (it != Xi.begin());
            bool hasB = (it != Xi.end());

            if(!hasA){
                cout << "no " << *it << "\n";
            }else if(!hasB){
                cout << *(it-1) << " no\n";
            }else{
                cout << *(it-1) << " " << *it << "\n";
            }
        }
    }
    return 0;
}