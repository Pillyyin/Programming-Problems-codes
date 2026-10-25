//  4. Minimum Pushes to the Target
#include <bits/stdc++.h>
using namespace std ;

int m, n ;
int warehouse[20][20] ;
int dir_r[4] = {-1, 1, 0, 0} ;
int dir_c[4] = {0, 0, -1, 1} ;

bool ReachTarget(int tr, int tc, int sr, int sc, int br, int bc){
    bool visited[20][20] = {} ;
    queue<pair<int, int>> q ;

    visited[sr][sc] = true ;
    q.push({sr, sc}) ;
    
    while(!q.empty()){
        int r = q.front().first ;
        int c = q.front().second ;
        q.pop() ;

        if(r == tr && c == tc) return true ;

        //  check around
        for(int i=0;i<4;i++){
            int near_r = r + dir_r[i] ;
            int near_c = c + dir_c[i] ;

            if(near_r < 0 || near_r >= m || near_c < 0 || near_c >= n) continue ;   //  out of bounds 
            if(warehouse[near_r][near_c] == 1) continue ;   //  wall
            if(near_r == br && near_c == bc) continue ;
            if(visited[near_r][near_c]) continue ;

            visited[near_r][near_c] = true ;
            q.push({near_r, near_c}) ;
        }

    }

    return false ;
}

struct State{
    int br, bc ;    //  box
    int pr, pc ;    //  person
    int pushes ;
}

int main(){
    int T ;
    int target_r, target_c, start_r, start_c, box_r, box_c ;
    cin >> T ;
    while(T){
        //  Input
        cin >> m >> n ;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin >> warehouse[i][j] ;
            }
        }

        //  Check target, start, box and change to 0
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(warehouse[i][j] == 4){
                    target_r = i ;
                    target_c = j ;
                    warehouse[i][j] = 0 ;
                }else if(warehouse[i][j] == 3){
                    box_r = i ;
                    box_c = j ;
                    warehouse[i][j] = 0 ;
                }else if(warehouse[i][j] == 2){
                    start_r = i ;
                    start_c = j ;
                    warehouse[i][j] = 0 ;
                }
            }
        }

        // ReachTarget(target_r, target_c, start_r, start_c, box_r, box_c) ;
        cout << ReachTarget(2, 4, start_r, start_c, box_r, box_c) << "\n" ;
        cout << ReachTarget(3, 1, 2, 2, 2, 1) << "\n" ;
        T-- ;
    }
    
}
