/*
    ¦^¤å AC (1ms, 3.4MB)
*/
# include <bits/stdc++.h>
using namespace std;
int main() {
    string s ;
    cin >> s ;

    int size = s.size() ;
    bool same ;
    for(int i=0;i<size/2;i++){
        if(s[i] == s[size-1-i]){
            same = true ;
        }else{
            same = false ;
            break ;
        }
    }

    if(same){
        cout << "yes" << "\n" ;
    }else{
        cout << "no" << "\n" ;
    }

    return 0 ;
}