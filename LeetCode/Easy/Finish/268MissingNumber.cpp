//  Runtime 19ms(9.36%), Memory 28.12MB(5.09%)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int, int> num_mp ;

        for(int i=0;i<nums.size();i++){
            num_mp[nums[i]] = nums[i] ;
        }

        int j = 0 ;
        while(num_mp.count(j)){
            j++ ;
        }

        return j ;

    }
};

//  math
//  Runtime 0ms(100%), Memory 21.8MB(38.28%)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int sum ;
        int n = nums.size() ;
        sum = n * (n+1) / 2 ;

        for(int i=0;i<n;i++){
            sum -= nums[i] ;
        }

        return sum ;
    }
};



