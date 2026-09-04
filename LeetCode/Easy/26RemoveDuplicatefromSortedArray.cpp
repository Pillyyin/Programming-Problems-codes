// Runtime 0ms(100%), Memory 22.68MB(52.92%)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0 ;

        int i = 0 ; // standard
        for(int j=1;j<nums.size();j++){ // scan after standard 
           if(nums[i] != nums[j]){
                i++ ;
                nums[i] = nums[j] ;
            }
        }
        return i+1 ; 
    }
};
