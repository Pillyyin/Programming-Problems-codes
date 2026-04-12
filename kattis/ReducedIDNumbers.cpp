# include <bits/stdc++.h>
using namespace std;
int main() {
    int G ;
    cin >> G ;
    int SIN[G] ;
    for(int i=0;i<G;i++){
        cin >> SIN[i] ;
    }

    for(int m=1 ; ; m++){ //眖1秨﹍т
        bool check[m] ; //緇计
        for(int k=0;k<m;k++){
            check[k] = false ; //﹍てfalse
        }
        bool ok = true ; //程耞bool
        for(int l=0;l<G;l++){
            int a = SIN[l] % m ;
            if(check[a] == true){ //緇计Τノ筁ぃok
                ok = false ; 
                break ;
            }
            check[a] = true ; //緇计⊿ノ筁璶ノ┮暗夹癘
        }

        if(ok){
            cout << m << "\n" ;
            break ; 
        }

    }


    return 0 ;
}