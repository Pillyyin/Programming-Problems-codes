//  Runtime 0ms(100%), Memory 40.18MB(41.92%)
class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum = 0 ;
        for(int i=0;i<nums.size();i++){
            if(nums.size() % (i + 1) == 0 ){
                sum += nums[i] * nums[i] ;
            }
        }

        return sum ;
    }
};