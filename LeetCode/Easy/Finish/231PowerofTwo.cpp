//  Runtime 0ms(100%), Memory 7.81MB(50.41%)
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0) return false ;

        while(n % 2 == 0) n /= 2 ;
        return n == 1 ;
    } 
};