/*
    AC (1ms, 3.4MB)
*/
# include <bits/stdc++.h>
using namespace std;
int main() {
    int pencil ;
    cin >> pencil ;

    int money = 0 ;
    while(pencil){
        if(pencil/12 != 0){
            money += 50 ;
            pencil -= 12 ;
        }else{
            money += 5 ;
            pencil-- ;
        }
    }

    cout << money << "\n" ;

    return 0 ;
}