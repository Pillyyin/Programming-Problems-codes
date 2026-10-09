class Solution {
public:
    int minInsertions(string s) {
        stack<char> st ;
        bool pair = false ;
        for(char c : s){
            if(c == '('){
                st.push(c) ;
            }else if(c == ')' && st.top() == '('){
                st.push(c) ;
                pair = true
            }else if(c == ')' && st.top() == '')
        }
    }
};