// only cout last number of N! e.g. 5!=120 cout << 0 ;
# include <bits/stdc++.h>
using namespace std;
int main() {
    int T, N, ans ;
    cin >> T ;
    for(int i=0;i<T;i++){
        ans = 1 ;   //reset
        cin >> N ;
        for(int j=N;j>0;j--){
            ans = ans*j ;
        }
        cout << ans%10 << "\n" ;
    }

    return 0 ;
}