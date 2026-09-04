//	AC (1ms, 3.5MB)
# include <bits/stdc++.h>
using namespace std;
int main() {
    int T ;
    string n ;
    cin >> T ;
    for(int i=0;i<T;i++){
        cin >> n ;
        int sum = 1 ;
        for(int j=0;j<=n.size()-1;j++){
            sum *= n[j]-'0' ;
        }

        cout << sum << "\n" ;
    }
}