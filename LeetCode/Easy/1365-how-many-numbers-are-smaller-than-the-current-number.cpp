class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans ;
        int counter ;
        for(int i=0;i<nums.size();i++){
            counter = 0 ;
            for(int j=0;j<nums.size();j++){
                if(nums[j] > nums[i]){
                    counter++ ;
                }
            }
            nums.push_back(counter) ;
        }

        return ans ;
    }
};
