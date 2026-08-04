# include <bits/stdc++.h>
using namespace std;
int main() {
    int e, f, c, bottle = 0, drink = 0, newdrink = 0 ;
    cin >> e >> f >> c ;
    bottle = e + f ; // 1st
    
    while(bottle>=c){
        newdrink = bottle / c ;
        drink += newdrink ;
        bottle = newdrink + bottle % c ;
    }

    cout << drink << "\n" ;
    
   

    return 0 ;
}
