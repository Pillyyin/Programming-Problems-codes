//  Runtime 0ms(100%), Memory 20.66MB(45.21%)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = 0 ;
        for(int x : nums){
            n ^= x ;
        }
        
        return n ;
    }
};