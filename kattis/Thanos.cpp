// use int will TLE because overflow
# include <bits/stdc++.h>
using namespace std;
int main() {
    long long P, R, F, T, year, count=0 ; //人口，上升數，糧食
    cin >> T ;
        while(count<T){
        cin >> P >> R >> F ;
        while(P<=F){
            P*=R ;
            year++ ;
        }
        cout << year << "\n" ;
        year=0 ; //算完一個rest year
        count++ ;
    }
    return 0 ;
}
