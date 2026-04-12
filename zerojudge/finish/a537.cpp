//質數判斷
# include <bits/stdc++.h>
using namespace std;
int main() {
    int T ;
    cin >> T ;

    for(int i=1;i<T+1;i++){
        string s ;
        cin >> s ;

        sort(s.begin(), s.end()) ; //注意不一定照順序，要sort(第一次沒發現)

        int count = 1 ;
        string primechar = "" ;

        for(int j=0;j<s.size()-1;j++){
            if(s[j] == s[j+1]){
                count ++ ;
            }else{  //字元一換就計算是否質數個
                bool prime = (count>=2) ;
                for(int k=2;k<=sqrt(count);k++){
                    if(count%k == 0){
                       prime = false ;
                       break ;
                    }
                }
                if(prime){
                    primechar += s[j] ;
                }
                count = 1 ; //reset
            }
        }
        
        //最後一個字
        bool prime = (count>=2) ;
        for(int k=2;k<=sqrt(count);k++){
            if(count%k == 0){
                prime = false ;
                break ;
            }
        }
        if(prime){
            primechar += s.back();
        }
        

        if(primechar.empty()){
            cout << "Case " << i << ": empty\n";
        }else{
            cout << "Case " << i << ": " << primechar << "\n" ;
        }

    }

    return 0 ;
}