/*
must write an algorithm with O(log n)
    Runtime 0ms(100%), Memory 13.46MB(98.65%)
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1 ;
        while(left<=right){
            int mid = (left+right)/2 ;
            if(target == nums[mid]){
                return mid ;
            }else if(target > nums[mid]){
                left = mid + 1 ;
            }else if(target < nums[mid]){
                right = mid - 1 ;
            }
        }
        
        return left ;
    }
};

/*

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4

*/