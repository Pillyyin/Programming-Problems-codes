//  Runtime 0ms(100%), Memory 8.19MB(47.87%)
class Solution {
public:
    bool checkValidString(string s) {
        stack<int> leftpar ;
        stack<int> star ;

        for(int i=0;i<s.size();i++){
            if(s[i] == '*'){
                star.push(i) ;
            }else if(s[i] == '('){
                leftpar.push(i) ;
            }else{  // find ')'
               if(!leftpar.empty()){
                    leftpar.pop();
                }else if(!star.empty()){
                    star.pop() ;
                }else{
                    return false ;
                }
            }

            
        }

        //  remain '('
        while(!leftpar.empty() && !star.empty()){
            if(leftpar.top() > star.top()){
                return false ;
            }

            leftpar.pop() ;
            star.pop() ;
        }

        return leftpar.empty() ;
    }
};