/*
¼É¤O¸Ñ AC (1ms, 3.2MB)
*/
# include <bits/stdc++.h>
using namespace std;
int main() {
    int whowin = 0 ;
    int game = 2 ;

    while(game){
        int score ;
        int home = 0, away = 0 ;
        
        
        for(int i=0;i<4;i++){
            cin >> score ;
            home += score ;
        }
    
        for(int j=0;j<4;j++){
            cin >> score ;
            away += score ;
        }

        cout << home << ":" << away << "\n" ;

        if(home > away){
            whowin++ ;
        }else{
            whowin-- ;
        }

        game -- ;
    }

    if(whowin == 2){
        cout << "Win" << "\n" ;
    }else if(whowin == -2){
        cout << "Lose" << "\n" ;
    }else{
        cout << "Tie" << "\n" ;
    }
    

    return 0 ;
}