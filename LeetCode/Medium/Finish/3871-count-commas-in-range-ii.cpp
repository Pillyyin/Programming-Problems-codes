//  Runtime 0ms(100%), Memory 9.04MB(57.33%)
class Solution {
public:
    long long countCommas(long long n) {
        // math

        if(n < 1000) return 0 ;
        if(n < 1000000) return n - 999 ;
        if(n < 1000000000) return 2*(n-999999) + 999000 ;
        if(n < 1000000000000) return 3*(n-999999999) + 2*999000000 + 999000 ;
        if(n == 1000000000000000) return 4*(n-999999999999) + 3*999000000000 + 2*999000000 + 999000 + 1 ;
        //else
        return 4*(n-999999999999) + 3*999000000000 + 2*999000000 + 999000 ;
        
    }
};



