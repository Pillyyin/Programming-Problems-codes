#include <bits/stdc++.h>
using namespace std ;

int main(){
    int M , D , S ;
    cin >> M >> D ;
    S = (M * 2 + D) % 3 ;

    if(S == 0){
        cout << "普通" ;
    }else if(S == 1){
        cout << "吉" ;
    }else{
        cout << "大吉" ;
    }
    
    return 0;
}