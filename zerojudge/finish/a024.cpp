/* TLE 1st try
#include <bits/stdc++.h>
using namespace std ;

int main(){
    int a, b, ans ;
    cin >> a >> b ;

    if(a == 1 || b == 1 ){
        ans = 1 ;
    }else if(a < b){
        for(int i=2;i<=a;i++){
            if(float(a%i) == 0 && float(b%i) == 0){
                ans = i ;
            }
        }
    }else{
        for(int j=2;j<=b;j++){
            if(float(a%j) == 0 && float(b%j) == 0){
                ans = j ;
            }
        }
    }

    cout << ans << "\n" ;

    return 0;
}
*/
// AC (3ms, 3.4MB)
// GCD (Euclidean algorithm)
#include <bits/stdc++.h>
using namespace std ;

int gcd(int a, int b){
    while(b != 0){
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

int main(){
    int a, b, ans ;
    cin >> a >> b ;
    
    ans = gcd(a, b);
    cout << ans << "\n" ;
    
    return 0;
}