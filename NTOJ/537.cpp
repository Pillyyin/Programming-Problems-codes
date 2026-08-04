// like triangle 
# include <bits/stdc++.h>
using namespace std;
int main() {
    int p, q, r ;
    cin >> p >> q >> r ;
    if(p + q >r && p + r > q && r + q > p){
        cout << "yes" << "\n" ;
    }else{
        cout << "no" << "\n" ;
    }
    return 0 ;
}