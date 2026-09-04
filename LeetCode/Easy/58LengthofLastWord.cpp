// Runtime 0ms(100%), Memory 8.88MB(68.42%)
class Solution {
public:
    int lengthOfLastWord(string s) {

        //  skip the trailing spaces
         int right = s.length()-1 ;
         while(right > 0 && s[right] == ' '){
            right-- ;
         }

         // count length of last word
         int length = 0 ;
         while(right >= 0 && s[right] != ' '){
            length++ ;
            right-- ;
         }

         return length ;
    }
};