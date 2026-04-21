# include <bits/stdc++.h>
using namespace std;
int main() {
    int n, mult ;
    cin >> n ;
    int num[n] ;
    for(int i=0;i<n;i++){
        cin >> num[i] ;
    }
    mult = num[0] ;
    for(int j=1;j<n-1;j++){ //num[0]不用算進去
        if(num[j] % mult == 0){
            mult = num[j+1] ;
            cout << num[j] << "\n" ;
            j++ ; //以防找到又把自己拿去算
        }
    }
    return 0 ;
}
