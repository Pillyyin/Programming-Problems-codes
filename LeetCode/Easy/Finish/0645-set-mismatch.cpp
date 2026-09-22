//  Runtime 11ms(35.95%), Memory 25.06MB(88.11%)
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end()) ;
        
        vector<int> ans = {0, 0};
        for(int i=1;i<nums.size();i++){
            if(nums[i] == nums[i-1]){
                ans[0] = nums[i] ;
            }
            if(nums[i] != nums[i-1] + 1 && ans[1] == 0 && nums[i] != ans[0]){
                ans[1] = nums[i-1]+1 ;
            }
        }

        if(nums[nums.size()-1] != nums.size()) ans[1] = nums.size() ;
        if(nums[0] != 1) ans[1] = 1 ;

        return ans ;
    }
};