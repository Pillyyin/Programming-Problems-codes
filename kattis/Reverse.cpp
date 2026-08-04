# include <bits/stdc++.h>
using namespace std;
int main() {
    long long n ;
    cin >> n ;
    long long num[n] ;
    for(int i=0;i<n;i++){
        cin >> num[i] ;
    }

    for(int j=n-1;j>-1;j--){
        cout << num[j] << "\n" ;
    }
    
    return 0 ;
}
