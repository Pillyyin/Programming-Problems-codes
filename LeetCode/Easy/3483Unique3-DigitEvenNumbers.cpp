class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        
        int nums[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
        int count[10] = {0} ;
        for(int x:digits){
            count[x] ++ ;
        }

        for(int i=0;i<10;i++){
            if(i%2 == 0 && count[i]>0){
                count[i]++ ;
            }
        }


    }
};