class Solution {
public:
    int maxLength(vector<int>& nums) {
        int LPE = 0 ;
        int n = nums.size() ;
        for(int i=0;i<n;i++){
            long long prod = 1, g = 0, l = 1 ;      
            for(int j=i;j<n;j++){
                prod *= nums[j] ;                    
                g = gcd(g, (long long)nums[j]) ;     
                l = lcm(l, (long long)nums[j]) ;     

                if(prod > 25200) break ; 
                
                if(prod == g * l){
                    LPE = max(LPE, j - i + 1) ;      
                }

                           
            }
        }
        return LPE ;
    }
};