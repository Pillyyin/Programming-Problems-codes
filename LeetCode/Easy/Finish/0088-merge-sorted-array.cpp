//  Runtime 0ms(100%), Memory 12.54MB(19.99%)
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int count = 0 ;

        for(int i=m;i<=m+n-1;i++){
            if(n == 0) break ;
            if(i < 0) i = 0 ;
                
            nums1[i] = nums2[count] ;
            count ++ ;
        }
        
        sort(nums1.begin(), nums1.end()) ;
        
    }
};