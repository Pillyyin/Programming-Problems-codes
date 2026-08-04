# include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M, sum=0, tmp=0, ans=0 ;
    cin >> N >> M ;
    for(int i=0;i<M;i++){
        cin >> sum ;
        if(sum + tmp <= N){ // 總人數>位子
            tmp+=sum ;
        }else{
            ans++ ;
        }
    }
    cout << ans << "\n" ;

    return 0 ;
}