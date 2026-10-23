//  Runtime 1ms(83.62%), Memory 14.35MB(83.72%)
class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        vector<int> hold(k + 1, -10001) ;
        vector<int> no_card(k + 1, 0) ;
        
        for(int n : prices){
            for(int i=1;i<=k;i++){
                hold[i] = max(hold[i], no_card[i - 1] - n) ;
                no_card[i] = max(no_card[i], hold[i] + n) ;
            }
        }
        
       return no_card[k] ;
    }
};