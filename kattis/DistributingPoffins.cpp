# include <bits/stdc++.h>
using namespace std;
int main() {
    long long N, M ;
    cin >> N >> M ;
    if(M % N == 0){
        cout << 0 << "\n" ;
    }else{
        cout << 1 << "\n" ;
    }
    return 0 ;
}