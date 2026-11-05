// Runtime 1ms(48.66%), Memory 16.44MB(92.88%)
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end()) ;
        int ans = 0 ;

        for(int x : arr1){
            int left = 0, right = arr2.size() ;
            while(left < right){
                int mid = (left + right) / 2 ;
                if(x - arr2[mid] <= d){
                    right = mid ;
                }else{
                    left = mid + 1 ;
                }
            }

            if(left == arr2.size() || arr2[left] > x + d){
                ans++ ;
            }
        }

        return ans ;
    }
};