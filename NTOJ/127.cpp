# include <bits/stdc++.h>
using namespace std;
int main() {
    int t ;
    string D ;
    cin >> t >> D ;

    for(int i=0;i<D.size();i++){
        int change = (D[i] - 'A' - t % 26 + 26) %26 ;
        cout << (char)('A'+ change) ;
    }

    return 0 ;
}