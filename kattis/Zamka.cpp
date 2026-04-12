# include <bits/stdc++.h>
using namespace std;
int main() {
    int L, D, X, tmp = 0, maxi = 0, mini = 100000 ;
    cin >> L >> D >> X ;
    for(int i=L;i<D+1;i++){   //跑數字L~D
        if((i%100000)/10000+(i%10000)/1000+(i%1000)/100+(i%100)/10+i%10 == X){ //判斷每位數的和
            tmp = i ; 
            if(tmp > maxi){
                maxi = tmp ;
            }
            if(tmp < mini){
                mini = tmp  ;
            }
        }
    }

    cout << mini << "\n" ; 
    cout << maxi << "\n" ;
    return 0 ;

}