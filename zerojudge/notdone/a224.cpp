/*
重新安排順序後
注意，大寫和小寫字母視為相同
*/
# include <bits/stdc++.h>
using namespace std;
int main() {
    string s ;
    
    while(cin >> s){
        bool same ;
        int size = s.size() ;
        //全轉小
        for(int i=0;i<s.size();i++){
            s[i] = tolower(s[i]) ;
        }  

        for(int i=0;i<size/2;i++){
            if(s[i] == s[size-1-i]){
                same = true ;
            }else{
                same = false ;
                break ;
            }
        }

        if(same){
            cout << "yes !" << "\n" ;
        }else{
            cout << "no..." << "\n" ;
        }
    }

    return 0 ;
}