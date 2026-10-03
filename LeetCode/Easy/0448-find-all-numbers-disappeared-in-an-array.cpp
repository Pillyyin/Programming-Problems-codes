class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans ;
        sort(nums.begin(), nums.end()) ;
        for(int i=0;i<=nums.size();i++){
            if(nums[i] != i){
                ans.push_back(i) ;
            }
        }

        return ans ;
    }
};