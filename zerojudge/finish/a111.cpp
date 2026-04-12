/*
AC (1ms, 3.2MB)
*/
# include <bits/stdc++.h>
using namespace std;
int main() {
    int N ;
    while(cin >> N){
        if(N == 0){
            break ;
        }
            
        int cube = 0 ; 
        for(int i=N;i>=1;i--){
            cube += i*i ;
        }
        cout << cube << "\n" ;
    }
    return 0 ;
}