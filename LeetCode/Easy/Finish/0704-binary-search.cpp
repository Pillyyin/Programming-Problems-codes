//Runtime 0ms , Memory 31.34MB
#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0 ;
        int right = nums.size()-1 ;

        while(left <= right){
            int mid = left + (right-left)/2 ;
            if(target == nums[mid]){
                return mid ;
            }else if(target > nums[mid]){
                left = mid + 1 ;
            }else if(target < nums[mid]){
                right = mid - 1 ;
            }    
        }
        
        return -1 ;
        
    }
};
