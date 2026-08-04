# include <bits/stdc++.h>
using namespace std;
int main() {
    string msg ;
    cin >> msg ;

    int N = msg.size() ;
    int R = 0, C = 0 ;
    for(int r=(int)sqrt(N)+1;r>=1;r--){
        if(N%r == 0 && r <= N / r){
            R = r ;
            C = N / r ;
            break ;
        }
    }

    char array[R][C] ;
    int count = 0 ;

    for(int i=0;i<C;i++){
        for(int j=0;j<R;j++){
            array[j][i] = msg[count] ;
            count ++ ;
        }
    }

   
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cout << array[i][j] ;
        }
    }

    return 0 ;
}
