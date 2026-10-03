//  Runtime 6ms(61.35%), Memory 14.14MB(75.99%)
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans ;
        int counter ;
        for(int i=0;i<nums.size();i++){
            counter = 0 ;
            for(int j=0;j<nums.size();j++){
                if(nums[i] > nums[j]){
                    counter++ ;
                }
            }
            ans.push_back(counter) ;
        }

        return ans ;
    }
};

