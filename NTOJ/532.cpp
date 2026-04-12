# include <bits/stdc++.h>
using namespace std;
int main() {
    int p, q, a = 0, b = 0 ;
    cin >> p >> q ;
    if(p%2==0 && p%3==0){
        a++ ;
        b++ ;
    }
    if(q%2==0 && q%3==0){
        a++ ;
        b++ ;
    }
    if(p%2==0 && p%3!=0){
        a++ ;
    }else if(p%3==0 && p%2!=0){
        b++ ;
    }
    if(q%2==0 && q%3!=0){
        a++ ;
    }else if(q%3==0 && q%2!=0){
        b++ ;
    }
    cout << a << " " << b ;
    return 0 ;
}