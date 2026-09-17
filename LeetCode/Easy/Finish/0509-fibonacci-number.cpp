//  Recursion
//  Runtime 14ms(22.44%), Memory 7.74MB(65.29%)
class Solution {
public:
    int fib(int n) {
        
        if(n == 0 || n == 1 ){
            return n ;
        }else{
            return fib(n-1) + fib(n-2) ;
        }
        
    }
};

//  Dynamic Programming
//  Runtime 3ms(64.54%), Memory 8.31MB(11.46%)
class Solution {
public:
    int fib(int n) {
        
        vector<int> dp(n+1) ;
        
        if( n == 0 || n == 1 ){
        
            return n ;
        }else{
            dp[1] = 1 ;
            for(int i=2;i<=n;i++){
                dp[i] = dp[i-1] + dp[i-2] ;
            }

            return dp[n] ;
        }
        
    }
};

