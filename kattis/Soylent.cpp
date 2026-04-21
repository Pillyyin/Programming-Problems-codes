//注意題目超過一點卡路里也要補滿
# include <bits/stdc++.h>
using namespace std;
int main() {
    int T , N ;
    cin >> T ;
    for(int i=0;i<T;i++){
        cin >> N ;
        if(N%400 == 0){
            cout << N/400 << "\n" ;
        }else{
            cout << (N/400)+1 << "\n" ;
        }
    }
}
