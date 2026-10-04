//  Runtime 27ms(33.02%), Memory 53.04MB(76.33%)
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans ;
        sort(nums.begin(), nums.end()) ;
        int counter = 1 ;

        for(int i=0;i<nums.size();i++){
            //  repetitive
            if(i > 0 && nums[i] == nums[i-1]) continue ;

            while(nums[i] > counter){
                ans.push_back(counter) ;
                counter ++ ;
            }

            counter ++ ;
        }

        while(counter <= nums.size()){
            ans.push_back(counter) ;
            counter ++ ;
        }

        return ans ;
    }
};