// Runtime 0ms(100%), Memory 8.45MB(87.43%)

class Solution {
public:
    int mySqrt(int x) {

        // 0, 1
        if(x < 2) return x ;

        int left = 1, right = x/2, ans = 0  ;

        while(left <= right){
            int mid = left + (right - left)/2 ; 
             
            if(mid  <= x/mid){ // mid * mid <= x will overflow
                ans = mid ;
                left = mid + 1 ;
            }else{
                right = mid - 1 ;
            }
        }
        
        return ans ;
    }
};