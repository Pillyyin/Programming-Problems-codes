// Runtime 0ms(100%), Memory 9.09MB
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.find(needle) != string::npos){
            return haystack.find(needle) ;
        }else{
            return -1 ;
        }
        
    }
};

