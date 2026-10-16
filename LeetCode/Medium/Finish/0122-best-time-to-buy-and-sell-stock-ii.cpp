//  Runtime 2ms(36.81%), Memory 21.24MB(33.70%)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
            
            vector<int> had_card = {-10001} ;
            vector<int> no_card = {0} ;

            for(int i=0;i<prices.size();i++){
                had_card.push_back(max(no_card[i] - prices[i], had_card[i])) ;
                no_card.push_back(max(had_card[i] + prices[i], no_card[i])) ;
            }

            int max_profit ;
            for(int i=1;i<prices.size()+1;i++){
                max_profit = max(had_card[i], no_card[i]) ;
            }

            return max_profit ;
        }

};