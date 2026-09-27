//  Runtime 0ms(100%), Memory 8.35MB(99.58%)
class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> brackets_st ;
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                brackets_st.push(i) ;
            }else if(s[i] == ')'){
                reverse(s.begin()+brackets_st.top()+1,s.begin()+i+1) ;
                brackets_st.pop()
            }
        }

        s.erase(remove(s.begin(), s.end(), '('), s.end()) ;
        s.erase(remove(s.begin(), s.end(), ')'), s.end()) ;

        return s ;
    }
};