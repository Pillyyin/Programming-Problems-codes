//  use int will TLE
# include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, ans = 0 ;
    cin >> n ;
    ans += n ;
    while(n != 1){
        if(n % 2 == 0){
            n = n / 2 ;
            ans += n ;
        }else{
            n = (3 * n) + 1 ;
            ans += n ;
        }
    }

    cout << ans << "\n" ; 

    return 0 ;
}
