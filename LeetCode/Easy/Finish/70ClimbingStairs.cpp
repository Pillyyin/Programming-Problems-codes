//  Runtime 0ms(100%), Memory 7.73MB(88.48%) 
class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2) return n ;

        // i step = (i-1) step + (i-2) step
        int  pre2 = 1, pre1 = 2, current = 0;
        for(int i=3;i<=n;i++){
            current = pre1 + pre2 ;
            pre2 = pre1 ;
            pre1 = current ;
        }

        return current ;
    }
};