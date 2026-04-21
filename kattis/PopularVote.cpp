# include <bits/stdc++.h>
using namespace std;
int main() {
    int T, n, win = 0, maxval = 0, votes = 0 ;
    cin >> T ; //幾項投票
    for(int i=1;i<T+1;i++){ //
        cin >> n ; //候選人數
        int cand[n+1] ;

        for(int j=1;j<n+1;j++){
            cin >> cand[j] ; //票數
            votes += cand[j] ;
            win = 1 ;
            votes = 0 ;
            maxval = 0 ;
        }

        maxval = cand[1] ; //預設1號都是最大
        
        for(int k=1;k<n;k++){ //判斷會少一圈
            if(cand[k+1] > maxval){        // 簡化條件，只需要跟maxval比
                maxval = cand[k+1] ;
                win = k+1 ;
            } else if(cand[k+1] == maxval){  // 有並列最高票
                win = 0;
            }
        }

        if(win == 0){
            cout << "no winner" << "\n" ;
        }else if( maxval * 2 > votes ){
            cout << "majority winner " << win << "\n" ;
        }else{
            cout << "minority winner " << win << "\n" ;
        }
    }
        return 0 ;
}
