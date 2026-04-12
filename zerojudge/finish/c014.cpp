/*
	AC (2ms, 3.2MB)
*/
#include <bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);

    string num1, num2 ;
    
    while(cin >> num1 >> num2){
        
        reverse(num1.begin(), num1.end()) ;
        reverse(num2.begin(), num2.end()) ;

        if(num1 == "0" && num2 == "0" ){
            break ;
        }

        long long count = 0, carry = 0 ;
        for(int i=0;i<(int) max(num1.size(),num2.size());i++){
            int d1 = (i < num1.size()) ? num1[i]-'0' : 0 ;
            int d2 = (i < num2.size()) ? num2[i]-'0' : 0 ;
            int sum = d1 + d2 + carry;
            carry = sum / 10;  // °O¿ı¶i¦ì
            if(carry){
                count++ ;
            }
        }
        
        if(count == 0){
            cout << "No carry operation." << "\n" ;
        }else if(count == 1){
            cout << count << " carry operation." << "\n" ;
        }else{
            cout << count << " carry operations." << "\n" ;
        }
        
    }
    
    return 0;
}