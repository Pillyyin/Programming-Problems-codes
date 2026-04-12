//Prime numbers can be repeated.
# include <bits/stdc++.h>
using namespace std;
int main() {
    long long N ;
    cin >> N ;
    if(N%2==0){ //even
        cout << N/2 ;
    }else{  //odd 5-1/2=2   1001-1/2=500
        cout << (N-1)/2 ;
    }
}