//  Runtime 0ms(100%), Memory 8.88MB(74.85%)
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 0) return false ;

        while(n % 3 == 0) n /= 3 ;
        return n == 1 ;
    }
};