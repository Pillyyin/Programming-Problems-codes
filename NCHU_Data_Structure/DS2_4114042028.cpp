//  2. Connected Islands
# include <bits/stdc++.h>
using namespace std;

int m, n ;
vector<string> region ;

int move_x[8] = {-1, 0, 1, -1, 1, -1, 0, 1} ;
int move_y[8] = {-1, -1, -1, 0, 0, 1, 1, 1} ;

void dfs(int row, int col){

    //  skip if over the map or 0 
    if(row < 0 || col < 0 || row >= m || col >= n || region[row][col] == '0'){
        return ;
    }
    // visited
    region[row][col] = '0' ; 
    // cheak around
    for(int i=0;i<8;i++){
        int next_x = row + move_x[i] ;
        int next_y = col + move_y[i] ;
        dfs(next_x, next_y) ;
    }

}

int main() {
    
    while(cin >> m >> n){
        int island = 0 ;

        if(m == 0) break ;

        region.resize(m) ;
        for(int i=0;i<m;i++){
            cin >> region[i] ;
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(region[i][j] == '1'){
                    island ++ ;
                    dfs(i, j) ;
                }
            }
        }

        cout << island << "\n" ;

    } 

    return 0 ;
}