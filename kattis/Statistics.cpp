# include <bits/stdc++.h>
using namespace std;
int main() {
    int x, rank=0 ;
    while(cin >> x){
        int X[x] ;
        for(int i=0;i<x;i++){
            cin >> X[i] ;
        }
        sort(X,X+x) ;
        rank++ ;
        cout << "Case " << rank << ": " << X[0] << " " << X[x-1] << " " << X[x-1]-X[0] << "\n" ;

    }

    return 0 ;
}
