//  Runtime 0ms(100%), Memory 9.31MB(8.81%)
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans ;
        ans.reserve(right - left + 1) ;
        for(int i=left;i<=right;i++){
            
            bool sdn = true ; // self-dividing number
            int tmp = i ;
            while(tmp > 0){
                int digit = tmp % 10 ;
                if(digit == 0 || i % digit != 0){
                   sdn = false ;
                   break ;
                }

                tmp /= 10 ;
            }

            if(sdn){
                ans.push_back(i) ;
            }
        }

        return ans ;
    }
};