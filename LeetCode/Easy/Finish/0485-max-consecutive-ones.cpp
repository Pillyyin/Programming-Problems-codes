//  Runtime 4ms(9.06%), Memory 50.32MB(5.02%)
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, max_count = 0 ;

        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1){
                count ++ ;
                max_count = max(count, max_count) ; 
            }else{
                count = 0 ;
            }

        }
        
        return max_count ;
    }
};


//  Runtime 3ms(18.15%), Memory 49.98MB(99.79%)
class Solution {
public:

    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, max = 0 ;

        for(int i=0;i<nums.size();i++){

            if(nums[i] == 1){
                count ++ ;
            }

            if(nums[i] == 0 || i == nums.size()-1){
                if(count > max){
                    max = count ;
                }
                count = 0 ;
            }
        }

        return max ;
    }
};


//  Runtime 0ms(100%), Memory 50.08MB(93.16%)
class Solution {
public:

    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, max = 0 ;

        for(const int num : nums){
            if(num == 1){
                count ++ ;
            }else{
                if(count > max){
                    max = count ;
                }
                count = 0 ;
            }
        }

        if(count > max){
            max = count ;
        }

        return max ;
    }
};