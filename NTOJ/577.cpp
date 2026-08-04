# include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, a, b, ans=1 ;
    cin >> n ;
    for(int i=0;i<n;i++){
        cin >> a >> b ;
        for(int j=0;j<b;j++){
            ans=ans*a ;
        }
        cout << ans << "\n" ;
        ans=1 ; //reset after cout last ans
    }

    return 0 ;
}