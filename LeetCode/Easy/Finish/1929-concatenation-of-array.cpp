//  Runtime 0ms(100%), Memory 16.86MB(59.85%)
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(nums.size()*2) ;
        
        for(int i=0;i<nums.size();i++){
            ans[i] = nums[i] ;
            ans[i+nums.size()] = nums[i] ;
        }

        return ans ;
    }
};