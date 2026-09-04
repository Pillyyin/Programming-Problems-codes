// Runtime 3ms(9.18%), Memory 8.86MB(67.45%)

class Solution {
public:
    bool isValid(string s) {
        
        stack <char> opr ; // Push the left parenthesis onto the stack.
        
        for(char c : s){
            
            if(s.size() == 1){
                return false ;
            }

            if(c == '(' || c == '[' || c == '{'){
                opr.push(c) ;
            }else{  // Right parenthesis

                if(opr.empty()){
                    return false ;
                }

                if((c==')' && opr.top()=='(')||(c==']' && opr.top()=='[')||(c=='}' && opr.top()=='{')){
                    opr.pop() ;
                }else{
                    return false ;
                }

            }
        
        }

        return opr.empty() ; 

    }
};

