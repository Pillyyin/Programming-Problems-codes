class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st ;
        bool inner = false ;
        string ans = "" ;
        for(char c : s){
            if(st.empty() && c == '('){
                inner = true ;
            }

            if(inner){
                st.push(c) ;
                ans += c ;
                if(st.size() == 2 && c == ')')

                if(st.size() == 1 && c == ')'){
                    st.pop() ;
                    st.pop() ;
                    inner = false ;
                }
            }
            
        }

        return ans ;
    }
};