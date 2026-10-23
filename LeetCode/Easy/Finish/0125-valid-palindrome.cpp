//  Runtime 0ms(100%), Memory 9.83MB(74.65%)
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1 ;


        while(left < right){
            // not letter 
            while(left < right && !isalnum(s[left])){
                left ++ ;
            }
            while(left < right && !isalnum(s[right])){
                right -- ;
            }
            // Find Capital
            if(tolower(s[left]) != tolower(s[right])){
                return false ;
            }

            left ++ ;
            right -- ;
        }

        return true ;
    }
};