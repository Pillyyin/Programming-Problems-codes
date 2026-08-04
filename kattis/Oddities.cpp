# include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x ;
    cin >> n ;
    for(int i=0;i<n;i++){
        cin >> x ;
        if(x>0){
            if(x % 2 == 0){
                cout << x << " is even" << "\n" ;
            }else{
                cout << x << " is odd" << "\n" ;
            }
        }else if(x<0){
            x=-x ;
            if(x % 2 == 0){
                cout << -x << " is even" << "\n" ;
            }else{
                cout << -x << " is odd" << "\n" ;
            }
        }else if(x==0){ //要注意範圍包含0(一開始沒想到)
            cout << x << " is even" << "\n" ;
        }
        
    }

    return 0 ;
}
