// Runtime 0ms(100%), Memory 7.74MB(52.14%)
/*
class Solution {
public:
    bool canWinNim(int n) {
        if(n % 4 == 0){
            return false ;
        }else{
            return true ;
        }
    }
};
*/

// Runtime 0ms(100%), Memory 7.68MB(86.92%)
class Solution {
public:
    bool canWinNim(int n) {
        return n % 4 != 0 ;
    }
};