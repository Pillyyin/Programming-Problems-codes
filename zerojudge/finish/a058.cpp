# include <bits/stdc++.h>
using namespace std;
int main() {
    int n , a , b , c , d;
    b = 0 ;
    c = 0 ;
    d = 0 ;
    cin >> n ;
    for(int i=0;i<n;i++){
        cin >> a  ;
        if(a%3 == 0){
        b++;
    }else if(a%3 == 1){
        c++;
    }else if(a%3 == 2){
        d++ ;
    }
    }
    cout << b << " " << c  << " " << d ; 
}