//下一塊比上一塊寬就換下一座塔
# include <bits/stdc++.h>
using namespace std;
int main() {
    int N, tower=1;
    cin >> N ;
    int x[N] ;
    for(int i=0;i<N;i++){
        cin >> x[i] ;
    }
    for(int j=0;j<N-1;j++){
        if(x[j]<x[j+1]){
            tower++ ;
        }
    }

    cout << tower << "\n" ;

    return 0 ;
}
