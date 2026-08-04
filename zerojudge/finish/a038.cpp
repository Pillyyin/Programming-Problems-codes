// AC (2ms, 3.5MB)
// Test Case 2 is 0 or 00000000 need to output 0
#include <bits/stdc++.h>
using namespace std ;

int main(){
    string num ;
    cin >> num ;
    
    for(int i=num.size()-1;i>=0;i--){
        if(num[i] == '0'){
            num.pop_back() ;
        }else{
            break ;
        }
    }
    
    if(num.empty()){
        cout << 0 ;
    }else{
        for(int j=num.size()-1;j>=0;j--){
            cout << num[j] ;
        }
    }
    
    return 0;
}