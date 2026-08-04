# include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,x1,x2 ;
    cin >> a >> b >> c ;
    x1 = ((-b)+sqrt(b*b-4*a*c))/(2*a) ;
    x2 = ((-b)-sqrt(b*b-4*a*c))/(2*a) ;
    if ((b*b-(4*a*c))<0){
        cout << "No real root" ;
    }else if (x1 == x2){
        cout << "Two same roots " << "x=" << x1 ;
    }else if(x1 != x2){
        if(x1 > x2){
            cout << "Two different roots "  << "x1=" << x1 << " , " << "x2=" << x2 ;
        }else if(x1 < x2){
            cout << "Two different roots "  << "x1=" << x2 << " , " << "x2=" << x1 ;
        }
        
    }
}