//  3. Collectible Card Trading
# include <bits/stdc++.h>
using namespace std;

int main() {
    int k, price, max_profit ;
    cin >> k ;

    vector<int> allprice ;
    while(cin >> price){
        allprice.push_back(price)
    }

    vector<int> had_card = {-1001} ;
    vector<int> no_card = {0} ;

    for(int i=0;i<allprice.size();i++){
        had_card.push_back(max(no_card[i] - allprice[i], had_card[i])) ;
        no_card.push_back(max(had_card[i] + allprice[i], no_card[i])) ;
    }




}