# include <bits/stdc++.h>
using namespace std;
int main() {
    int n ;
    cin >> n ;

    int num[n] = {} ;
    for(int i=0;i<n;i++){
        cin >> num[i] ;
    }

    double total = 0 ;
    int bat = n ;
    for(int i=0;i<n;i++){
        if(num[i] >= 0){
            total += num[i] ;
        }else if(num[i] < 0){
            bat-- ;
        }
        
    }

    cout << setprecision(17) << total/bat ;

    return 0 ;
}