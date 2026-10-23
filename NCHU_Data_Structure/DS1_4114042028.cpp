//  1. Library Book Stacking
# include <bits/stdc++.h>
using namespace std ;
int main() {
    int count = 0 ;     //  count case
    string books ;
    while(cin >> books){
        vector<char> st ;

        if(books == "end"){
            break ;
        }
        
        count ++ ;

        for(char c : books){
            bool is_put = false ;
            for(int i=0;i<st.size();i++){
                if(c <= st[i] ){
                    st[i] = c ;
                    is_put = true ;
                    break ;
                }
            }

            if(!is_put){
                st.push_back(c) ;
            }
        }

        cout << "Case " << count << ": " << st.size() << "\n" ;
        
    }

    return 0 ;
}