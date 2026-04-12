# include <bits/stdc++.h>
using namespace std;
int main() {
    long long n=0, count=0 ;
    cin >> n ;
    while(n!=0){
        n=n/10 ;
        count++ ;
    } 
    cout << count << "\n" ;
    
    return 0 ;
}