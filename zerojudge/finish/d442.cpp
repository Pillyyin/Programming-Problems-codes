/*
AC (32ms, 3.2MB)
*/
#include <bits/stdc++.h>
using namespace std ;

int happynum(int a){
    int sum = 0 ;
    while(a > 0){
        int r = a%10 ;
        sum += r * r ;
        a /= 10 ;
    }
    return sum ;
}

int main(){
    int n ;
    cin >> n ;

    for(int i=1;i<n+1;i++){
        int num, oldnum;
        cin >> num ;
        oldnum = num ;
        set<int> find ;
        while(num != 1){
            if(find.count(num)){    //.count()找元素是否存在，回傳true，
                break ;
            }
            find.insert(num) ;
            num = happynum(num) ; ;
        }

        if(num == 1){
            cout << "Case #" << i << ": " << oldnum <<  " is a Happy number." << "\n" ;
        }else{
            cout << "Case #" << i << ": " << oldnum <<  " is an Unhappy number." << "\n" ;
        }
        
        
    }

    return 0;
}