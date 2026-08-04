//If there are multiple valid solutions, you may output any one of them.
#include <bits/stdc++.h>
using namespace std ;

int main(){
    int x , y , r ;
    cin >> x >> y ;
    cin >> r ; 
    cout << x+r << " " << y+r << "\n" ;
    cout << x+r << " " << y-r << "\n" ; 
    cout << x-r << " " << y-r << "\n" ;
    cout << x-r << " " << y+r << "\n" ;

    return 0;
}
