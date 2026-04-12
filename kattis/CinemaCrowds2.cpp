//  cinema  → 必須讀完所有 input       e.g. input N = 10 ,M = 5
//  cinema2 → 可以提早 break                groups = 3 4 5 2 1
# include <bits/stdc++.h>
using namespace std;
int i ;
int main() {
    int N, M, group=0, tmp=0 ; //seat, visiting group 
    cin >> N >> M ;
    for(i=0;i<M;i++){
        cin >> group ;
        tmp+=group ;    //tmp用來累積總人數
        if(tmp > N){    //tmp超過座位就break
            break ;
        }
    } 
    cout << M-i << "\n" ;
    return 0 ;
}