class Solution {
public:
    bool checkValidString(string s) {
        stack <char> par ;
        int count = 0 ;
        for(char c : s){
            if(c == '*'){
                count ++ ;
            }else if(!par.empty()&& c == ')' && par.top() == '('){
                par.pop() ;
            }else{
                par.push(c) ;
            }
        }

        while(!par.empty()){
            if(par.top() == ')' || par.top() == '(' && count == 0){
                return false ;
            }else{
                par.top() ;
                count -- ;
            }
        }

        return true ;
    }
};