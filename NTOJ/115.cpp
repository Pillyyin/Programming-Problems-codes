# include <bits/stdc++.h>
using namespace std;
int main() {
    int N, loc ;
    string name, card[11] ;
    cin >> N ;

    for(int i=1;i<N+1;i++){
        cin >> name >> loc ;
        card[loc] = name ;
    }

    for(int i=1;i<11;i++){  //1~10
        if(card[i] == ""){
            cout << "EMPTY" << "\n" ;
        }else{
            cout << card[i] << "\n" ;
        }
        
    }   



    return 0 ;
}   