//  Runtime 0ms(100%), Memory 14.05MB(72.11%)
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans ;
        int n = prices.size() ;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(prices[i] >= prices[j]){
                    ans.push_back(prices[i] - prices[j]) ;
                    break ;
                }
                
                if(j == n-1){
                    ans.push_back(prices[i]) ;
                }
            }
            
        }

        ans.push_back(prices[n-1]) ;
        return ans ;
    }
};