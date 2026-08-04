/*
	AC (1ms, 3.4MB)
*/
#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin >> n ;

    vector<vector<int>> num ;
    for(int i=0;i<n;i++){
        vector<int> row ;
        int x, y ;
        cin >> x >> y ;
        row.push_back(x) ;
        row.push_back(y) ;
        num.push_back(row) ;
    }
    
    sort(num.begin(), num.end()) ;

    for(int i=0;i<n;i++){
        cout << num[i][0] << " " << num[i][1] << "\n" ;
    }

    return 0;
}