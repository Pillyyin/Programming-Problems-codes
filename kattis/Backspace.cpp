# include <bits/stdc++.h>
using namespace std;
int main() {
    string s ;
    cin >> s ;
    
    stack <char> st ;
    for(int i=0;i<s.size();i++){
        char a = s[i] ;
        if(a == '<'){
            st.pop() ;
        }else{
            st.push(a) ;
        }
    }

    vector <char> ans = {} ;
    while(!st.empty()){
        ans.push_back(st.top()) ;
        st.pop() ;
    }

    reverse(ans.begin() , ans.end()) ; //¤ÏÂà

    for(int i=0;i<ans.size();i++){
        cout << ans[i] ;
    }

    cout << "\n" ;

    return 0 ;
}