# include <bits/stdc++.h>
using namespace std;
int main() {
    int n ;
    cin >> n ;

    string num[n];
    for(int i=0;i<n;i++){
        cin >> num[i] ;
    }

    for(int i=0;i<n;i++){
        cout << num[i].size() << "\n" ;
    }

    return 0 ;
}
