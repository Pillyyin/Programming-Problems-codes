# include <bits/stdc++.h>
using namespace std;
int main() {
    int T, width, length ;
    cin >> T ;

    for(int i=0;i<T;i++){
        cin >> length >> width ;
        vector<vector<char>> grid(length, vector<char>(width));

        for(int j=0;j<length;j++){
            for(int k=0;k<width;k++){
                cin >> grid[j][k] ;
            }
        }

        //翻轉兩次
        for(int k = 0; k < grid.size(); k++){
            reverse(grid[k].begin(), grid[k].end());
        }
        reverse(grid.begin(), grid.end());

        //輸出
        cout << "Test " << i+1  << "\n" ;
        for(int l=0;l<length;l++){
            for(int m=0;m<width;m++){
                cout << grid[l][m]  ;
            }
            cout << "\n" ;
        }
    }
    
    return 0 ;
}