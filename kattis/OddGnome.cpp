# include <bits/stdc++.h>
using namespace std;
int main() {
    int n, g, G[1000] ;
    cin >> n ;
    for(int i=0;i<n;i++){
        cin >> g ;  //地精數
        for(int j=0;j<g;j++){
            cin >> G[j] ;
        }
        for(int k=0;k<g-1;k++){
            if(G[k+1]!=G[k]+1){
                cout << (k+1)+1 << "\n" ; //第二次+1是因為順位從1開始
                break ;
            }
        }
    
    }

    return 0 ;
}