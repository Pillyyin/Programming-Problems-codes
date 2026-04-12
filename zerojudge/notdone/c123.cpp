//stack應用
# include <bits/stdc++.h>
using namespace std;
int main() {

    int N ;
    while(cin >> N && N != 0){

        while(true){
            stack <int> st ;
            int test[N] ;

            cin >> test[0] ; //單獨輸入num[0]來判斷
            if(test[0] == 0){
                break ;
            } 

            for(int i=1;i<N;i++){
                cin >> test[i] ;
            }

            int rn = 0 ;
            for(int i=0;i<N;i++){
                st.push(i+1) ;  //從1開始先塞
                while(st.size() > 0 && st.top() == test[rn]){    //找到就pop
                    st.pop();
                    rn ++ ;
                }
            }
            
            if(rn == N){
                cout << "Yes" << "\n" ;
            }else{
                cout << "No" << "\n" ;
            }
        }
        cout << "\n" ;
    }
    
    return 0 ;
}