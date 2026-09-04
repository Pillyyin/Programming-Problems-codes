// Runtime 3ms, Memory 10.80MB
class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0){
            return false ;
        }

        string s = to_string(x) ;
        int len = s.size() ;

        for(int i=0;i<len/2;i++){
            if(s[i] != s[len-1-i]){
                return false ;
            }
        }

        return true ; 
        
    }
};