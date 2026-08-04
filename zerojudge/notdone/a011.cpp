# include <bits/stdc++.h>
using namespace std;
int main() {
    string s ;
    
    while(getline(cin, s)){
        int count = 0 ; 
        for(char c : s){
            if(c == ' '){
                count ++ ;
            }
        }

        cout << count << "\n" ;
    }

    return 0 ;
}