//  Rumtime 7ms(47.18%), Memory 31.76MB(13.72%)
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end()) ;

        return max(
            nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3] ,
            nums[0]*nums[1]*nums[nums.size()-1]
        ) ;
    }
};

//  
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int max1 = -1001, max2, max3 ; 
        int min1 = 1000, min2 ;

        for(int i=0;i<nums.size();i++){

            
        }

        return max( max1 * max2 * max3, min1 * min2 *max1 )
        
    }
};