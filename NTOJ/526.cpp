# include <bits/stdc++.h>
using namespace std;
int main() {
    int n ;
    cin >> n ;
    cout << (n%10)*100 + ((n%100)-(n%10)) + (n/100) << "\n" ;
    return 0 ;
}