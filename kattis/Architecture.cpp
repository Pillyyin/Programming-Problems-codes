# include <bits/stdc++.h>
using namespace std;
int main() {
    int R, C, eastmax = 0, northmax = 0 ;
    cin >> R >> C ;
    int east[R], north[C] ;

    for(int i=0;i<R;i++){   //cin >> east
        cin >> east[i];
    }
    for(int j=0;j<C;j++){   //cin >> north
        cin >> north[j] ;
    }

    for(int k=0;k<R;k++){   //determine eastmax
        if(east[k] > eastmax){
            eastmax = east[k]  ;
        }
    }
    for(int m=0;m<C;m++){   //determine northmax
        if(north[m] > northmax){
            northmax = north[m]  ;
        }
    }

    if(northmax == eastmax){
        cout << "possible" << "\n" ;
    }else{
        cout << "impossible" << "\n" ;
    }

    return 0 ;
}
