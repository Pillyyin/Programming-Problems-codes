//  Runtime 0ms(100%), Memory 17.05MB(73.00%)
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st ;
        for(const string& s : tokens){
            if(s.length() == 1 && (s[0] == '+' || s[0] == '-' || s[0] == '*' || s[0] == '/' ) ){
                
                int top1 = st.top() ;
                st.pop() ;

                int top2 = st.top() ;
                st.pop() ;

                switch (s[0]){
                    case '+': st.push(top2 + top1); break ;
                    case '-': st.push(top2 - top1); break ;
                    case '*': st.push(top2 * top1); break ;
                    case '/': st.push(top2 / top1); break ;
                }

            }else{
                st.push(stoi(s)) ;
            }
            
        }

        return st.top() ;
    }
};