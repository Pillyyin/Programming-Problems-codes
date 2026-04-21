# include <bits/stdc++.h>
using namespace std;
int score(int a, int b){
    // Mia
    if((a==1 && b==2) || (a==2 && b==1)) return 1000;
    
    // 對子
    if(a == b) return 100 + a;  
    
    // 其他(大的放前)
    int high = max(a, b);
    int low = min(a, b);
    return high * 10 + low;  // 例如 3,4 → 43
}

int main() {
    int s0, s1, r0, r1 ;
    while(cin >> s0 >> s1 >> r0 >> r1){
        int player1 = score(s0, s1);
        int player2 = score(r0, r1);

        if(s0==s1 && s1==r0 && r0==r1 && r1==0){
            break ;
        }else if(player1 > player2){
            cout << "Player 1 wins." << "\n" ;
        }else if(player2 > player1){
            cout << "Player 2 wins." << "\n" ;
        }else{
            cout << "Tie." << "\n" ;
        } 
        

    }

    return 0 ;
}
