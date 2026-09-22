//  Runtime 4ms(65.19%), Memory 13.38MB(81.54%)
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n) ;
        
        int count = 0 ;
        for(int i=0;i<2*n;i+=2){
            ans[i] = nums[count] ;
            ans[i+1] = nums[count+n] ;
            count ++ ;
        }

        return ans ;
    }
};