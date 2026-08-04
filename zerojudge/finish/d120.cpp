// 	AC (20ms, 300KB)
# include <bits/stdc++.h>
using namespace std;
int main() {
    int n ;
    while(cin >> n){
        if(n == 0){
            break ;
        }

        //找因數
        int count = 0, tmp = n, used = 1 ;
        for(int i=2;i<=tmp;i++){
            if((tmp%i) == 0 ){
                tmp /= i ;
                if(i != used){  
                    count ++ ;
                }
                used = i ;  // 標記質數用過
                i-- ;   //能除就再除一次
            }
        }

        cout << n << " : " << count << "\n" ;
    }
    return 0 ;
}