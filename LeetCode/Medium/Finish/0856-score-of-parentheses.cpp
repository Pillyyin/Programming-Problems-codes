//  Runtime 0ms(100%), Memory 8.16MB(42.34%)
class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> num ;
        num.push(0) ;
        for(char c : s){
            if(c == '('){
                num.push(0) ;
            }else{
                int inner = num.top() ;
                num.pop() ;

                int total  = max(1, 2 * inner) ;
                num.top() += total ;
            }
        }

        return num.top() ;
    }
};