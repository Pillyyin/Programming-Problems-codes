//找最低點，所以除了第一個正以外之後都家負的
# include <bits/stdc++.h>
using namespace std;
int main() {
    int n, t,tmp=0, min=0 ;
    cin >> n ;
    for(int i=0;i<n;i++){
        cin >> t ; //t>0 deposit , t<0 withdraw 
        tmp+=t ;
        if(tmp<min){
            min = tmp ;
        }
        
    }
    cout << -min << "\n" ;

    return 0 ;
}
