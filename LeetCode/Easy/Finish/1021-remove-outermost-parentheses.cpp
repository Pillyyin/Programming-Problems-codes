//  Runtime 0ms(100%), Memory 8.93MB(53.56%)
class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st ;
        string ans = "" ;
        for(char c : s){
            if(c == '(' && st.size() == 0){
                st.push(c) ;
            }else if(c == '(' && st.size() > 0){
                ans += c ;
                st.push(c) ;
            }else if(c == ')'){
                st.pop() ;
                if(st.size() > 0){
                    ans += c ;
                }
            }
            
        }

        return ans ;
    }
};