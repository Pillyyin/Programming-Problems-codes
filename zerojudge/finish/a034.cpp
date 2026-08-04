// 	AC (1ms, 3.4MB)
#include <bits/stdc++.h>
using namespace std ;

int main(){
    int num ;
    while(cin >> num){
        vector<int> bin;
        while(num > 0){
            bin.push_back(num % 2) ;
            num = num / 2 ;
        }

        for(int j=bin.size()-1;j>=0;j--){
            cout << bin[j] ;
        }
        cout << "\n" ;
    }

    return 0;
}