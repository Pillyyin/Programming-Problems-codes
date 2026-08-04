# include <bits/stdc++.h>
using namespace std;
int main() {
    char player, points ;
    int a = 0, b = 0 ;
    while(cin.get(player) && cin.get(points)){
        if(player == 'A'){
            a += points - '0' ;
        }else if(player == 'B'){
            b += points - '0' ;
        }
    }

    if(a > b){
        cout << "A" << "\n" ;
    }else{
        cout << "B" << "\n" ;
    }


    return 0 ;
}
