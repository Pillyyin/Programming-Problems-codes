class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n ;
        for(int x : nums){
            n ^= x ;
        }
        
        return n ;
    }
};