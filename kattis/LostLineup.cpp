# include <bits/stdc++.h>
using namespace std;
int main() {
    int n, diff ;
    cin >> n ;
    int line[n+1] ; //0不會用所以多宣告一個
    line[1] = 1 ; //一號必是Jimmy
    
    for(int i=2;i<n+1;i++){ //從2號位開始
        cin >> diff ;
        line[diff+2] = i ; //diff+2 = 真正位置
    }

    for(int j=1;j<n+1;j++){
        cout << line[j] << " " ;
    }
    

    return 0 ;
}