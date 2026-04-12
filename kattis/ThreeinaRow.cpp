# include <bits/stdc++.h>
using namespace std;
int main() {
    int N, count = 0 ;
    cin >> N ;
    int max = cbrt(N) ;
    for(int i=1;i<max+1;i++){
        if( (i*(i+1)*(i+2)) < N){
            count ++ ;
        }
    }

    cout << count ;

    return 0 ;
}