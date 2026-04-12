# include <bits/stdc++.h>
using namespace std;
int main() {
    long long N,a,b,c ;
    cin >> N ;
    for(int i=0;i<N;i++){
        cin >> a >> b >> c ;
        if(a==1){
            cout << b+c << endl ;
        }else if(a==2){
            cout << b-c << endl ;
        }else if(a==3){
            cout << b*c << endl ;
        }else if(a==4){
            cout << b/c << endl ;
        }
    }
}