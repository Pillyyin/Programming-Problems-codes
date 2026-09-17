// Runtime 0ms, Memory 14.83MB 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mp ;

        for(int i=0;i<nums.size();i++){

            int diff = target - nums[i] ;

            if(!mp.count(diff)){ // diff not inside than put diff inside mp

                mp[nums[i]] = i ;

            }else{ // find it

                return {mp[diff], i} ; 
            }
        }

        return {} ;
    }
};