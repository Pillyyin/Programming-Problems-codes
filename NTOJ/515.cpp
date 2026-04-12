# include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a1, a2, a3, a4 ;
    cin >> n ;
    a1 = n % 10 ;
    a2 = (n/10) % 10 ;
    a3 = (n/100) % 10 ;
    a4 = (n/1000) % 10 ;
    if(n > 999 && n < 10000){ //限制四位數
        if(a1==a2 && a2==a3 && a3==a4){
            cout << "GREAT!!" << "\n" ;
        }else{
            cout << "OAQ" << "\n" ;
        }
    }else{
        cout << "OAQ" << "\n" ;
    }
}