// AC (1ms, 3.6MB)
#include <bits/stdc++.h>
using namespace std ;

int main(){
    long long n, m ;
    while(cin >> n >> m){
        long long sum = n, count = 1 ;
        long long i = n+1 ;
        while(sum <= m){
            sum += i ;
            count++ ;
            i++ ;
        }
        cout << count << "\n" ;
    }
    
    return 0;
}