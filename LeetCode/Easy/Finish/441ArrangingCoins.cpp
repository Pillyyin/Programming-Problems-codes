//  Runtime 2ms(41.43%), Memory 8.90MB(36.44%)
class Solution {
public:
    int arrangeCoins(int n) {
        
        int i = 1 ;
        while(n-i > 0){
            n -= i ;
            i++ ;
        }

        if(n == i){
            return i ;
        }else{
            return i-1 ;
        }
        
    }
};

//  Runtime 0ms(100%), Memory 8.73MB(67.84%)
//  Binary Search
class Solution {
public:
    int arrangeCoins(int n) {
        int left = 0, right = n ;
        
        while(left <= right){
            long long mid = left + (right - left) / 2 ;
            long long sum = mid*(mid+1)/2 ;
            if(sum == n){
                return mid ;
            }else if(sum < n){
                left = mid + 1 ;
            }else{
                right = mid - 1 ;
            }
        }
        return right ;
    }
};