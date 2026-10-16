//  3. Collectible Card Trading
# include <bits/stdc++.h>
using namespace std;

int main() {
    int k ;
    while(cin >> k){
        string line ;
        cin.ignore() ;
        getline(cin, line) ;

        stringstream ss(line) ;
        vector<int> allprice ;
        int price ;
        while(ss >> price){
            allprice.push_back(price) ;
        }
        

        vector<int> had_card = {-10001} ;
        vector<int> no_card 
        
        for(int i=0;i<allprice.size();i++){
            had_card.push_back(max(no_card[i] - allprice[i], had_card[i])) ;
            no_card.push_back(max(had_card[i] + allprice[i], no_card[i])) ;
        }

        int max_profit = 0 ;
        
        cout << no_card.back() << "\n" ;
    }

    
}
/*
# include <bits/stdc++.h>
using namespace std;

int main() {
    int k ;
    while(cin >> k){
        string line ;
        cin.ignore() ;
        getline(cin, line) ;

        stringstream ss(line) ;
        vector<int> allprice ;
        int price ;
        while(ss >> price){
            allprice.push_back(price) ;
        }
        

        vector<int> had_card = {-10001} ;
        vector<int> no_card 
        
        for(int i=0;i<allprice.size();i++){
            had_card.push_back(max(no_card[i] - allprice[i], had_card[i])) ;
            no_card.push_back(max(had_card[i] + allprice[i], no_card[i])) ;
        }

        int max_profit = 0 ;
        
        cout << no_card.back() << "\n" ;
    }

    
}
*/