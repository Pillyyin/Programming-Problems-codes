# include <bits/stdc++.h>
using namespace std;
int main() {
    int x[4], y[4] ;
    for(int i=0;i<3;i++){
        cin >> x[i] >> y[i] ;
    }
    sort(x,x+3) ;
    sort(y,y+3) ;
    
    if(x[0]==x[1] && x[1]!=x[2]){
        cout << x[2] << " " ;
    }else if(x[0]!=x[1] && x[1]==x[2]){
        cout << x[0] << " " ;
    }
    if(y[0]==y[1] && y[1]!=y[2]){
        cout << y[2] << " " ;
    }else if(y[0]!=y[1] && y[1]==y[2]){
        cout << y[0] << " " ;
    }
    return 0 ;
}