//  Runtime 0ms(100%), Memory 8.60MB(51.38%)
class Solution {
public:
    int countCommas(int n) {
        if(n < 1000) return 0 ;
        return n-999 ;
    }
};