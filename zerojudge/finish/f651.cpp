/*
	AC (57ms, 3.4MB)
*/
# include <bits/stdc++.h>
using namespace std;
int main() {
    int n ;
    while(cin >> n){
        if(n%3 == 0){
            cout << n/3 << "\n" ;
        }else{
            cout << n/3+1 << "\n" ;
        }
        
    }

    return 0 ;
}