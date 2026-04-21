# include <bits/stdc++.h>
using namespace std;
int main() {
    int W, P ;
    cin >> W >> P ;

    int wall[P+2] ;
    wall[0] = 0 ;   //最左邊為0
    for(int i=1;i<=P;i++){
        cin >> wall[i] ;
    }

    wall[P+1] = W ;    //最右邊為W


    bool width[W+1] = {false} ; //初始為false

    for(int i=0;i<=P+1;i++){   //隔間與前後的距離
        for(int j=i+1;j<=P+1;j++){
            int diff ;
            diff = wall[j] - wall[i] ;
            if(diff <= W){
                width[diff] = true ;
            }
        }
    }
    
    
    for(int i=1;i<=W;i++){
        if(width[i]){
            cout << i << " " ;
        }
    }

    return 0 ;
}
