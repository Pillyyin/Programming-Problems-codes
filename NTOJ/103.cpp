# include <bits/stdc++.h>
using namespace std;
int main() {
    string drink1, drink2 ;
    string sweet1, sweet2 ; 
    int count = 0 ;
    cin >> drink1 >> sweet1 ;
    cin >> drink2 >> sweet2 ;
    if(drink1 == drink2){
        count ++ ;
    }
    if(sweet1 == sweet2){
        count ++ ;
    }

    if(count == 2){
        cout << "GOOD" << "\n" ;
    }else if(count == 1){
        cout << "=~=" << "\n" ;
    }else if(count == 0){
        cout << "OTZ" << "\n" ;
    }


    return 0 ;
}