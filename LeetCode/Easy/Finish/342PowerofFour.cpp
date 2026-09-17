//  Runtime 0ms(100%), Memory 7.93MB(11.94%)
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 0) return false ;

        while(n % 4 == 0) n /= 4 ;
        return n == 1 ;
    }
};

//  Runtime 0ms(100%), Memory 7.70MB(98.78%)
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 0) return false ;
        if(n == 1) return true ;
        if(n % 4 != 0) return false ;
        
        return isPowerOfFour(n/4) ;
    }
};