# include <bits/stdc++.h>
using namespace std;
//TLE
int fibo(int x){
    if(x==1){
            return 1 ;
        }else if(x==2){
            return 2 ;
        } else{
            return fibo(x-1)+fibo(x-2) ;
        }
}
int main() {
    int n;
    while(cin >> n ){
        cout << fibo(n) << endl ;
    }
}