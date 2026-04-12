//找交集
# include <bits/stdc++.h>
using namespace std;
int main() {
    int N, a[1000], b[1000], mini = 0 , maxi = 1000  ; 
    cin >> N ;
    for(int i=0;i<N;i++){
        cin >> a[i] >> b[i] ;
        maxi = min(maxi , b[i]) ;  //取右邊最小
        mini = max(mini , a[i]) ;  //取左邊最大
    }

    if(mini <= maxi){
        cout << "gunilla has a point" << "\n" ;
    }else{
        cout << "edward is right" << "\n" ;

    }

    return 0 ;
}