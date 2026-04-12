# include <bits/stdc++.h>
using namespace std;
int main() {
    int R, C, Zr, Zc ;
    cin >> R >> C >> Zr >> Zc ;
    
    char matrix[R][C] ;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin >> matrix[i][j] ;
        }
    }

    //放大
    for(int i=0;i<R;i++){   
        for(int zr=0;zr<Zr;zr++){   //行重複
            for(int j=0;j<C;j++){
                for(int zc=0;zc<Zc;zc++){   //列重複
                    cout << matrix[i][j] ;
                }
            }
            cout << "\n" ;
        }
    }

    return 0 ;
}