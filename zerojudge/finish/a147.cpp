// AC (2ms, 3.4MB)
#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    while(cin >> n){

        for(int i=1;i<n;i++){
            if(i%7 != 0){
                cout << i << " " ;
            }
        }
        cout << "\n" ;

        if(n == 0){
            break ;
        }
    }

    return 0;
}