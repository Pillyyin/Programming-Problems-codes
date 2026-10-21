class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1 ;


        for(int i=0;i<s.size()/2;i++){
            if(s[left] < 'A'){
                left ++ ;
            }
            if(s[right] < 'A'){
                right ++ ;
            }
            
            if('A' <= s[left] <= 'Z'){
                s[left] + 32 ;
            }else if('A' <= s[right] <= 'Z' ){
                s[right] + 32 ;
            }

            if(s[left] != s[right]){
                return false ;
            }
        }

        return true ;
    }
};