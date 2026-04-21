//只記expenses(小於0的數)再相加cout轉正
# include <bits/stdc++.h>
using namespace std;
int main() {
    int N, k, tmp=0 ;
    cin >> N ;
    for(int i=0;i<N;i++){
        cin >> k ;
        if(k<0){
            tmp+=k ;
        }   
    }
    cout << -tmp << "\n" ;
    return 0 ;
}
