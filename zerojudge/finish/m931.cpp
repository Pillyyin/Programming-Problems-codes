/*
AC (1ms, 3.2MB) 
*/

#include <bits/stdc++.h>
using namespace std ;

int main(){
    //優化
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n ;
    cin >> n ;

    int attack[n], defense[n], skill[n] ;
    for(int i=0;i<n;i++){
        cin >> attack[i] >> defense[i] ;
        skill[i] = attack[i]*attack[i] + defense[i]*defense[i] ;
    }

    //找第二大
    int max1 = 0, max2 = 0 ;
    for(int i=0;i<n;i++){
        if(skill[i] > max1){ //超過最大
            max2 = max1 ;
            max1 = skill[i] ;
        }else if(skill[i] > max2){  //超過第二大
            max2 = skill[i] ;
        }
    }

    //找第二大並輸出
    for(int i=0;i<n;i++){
        if(skill[i] == max2){
            cout << attack[i] << " " << defense[i] << "\n" ;
            break ;
        }
    }


    return 0;
}