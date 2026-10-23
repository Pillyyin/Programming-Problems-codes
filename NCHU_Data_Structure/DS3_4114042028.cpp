//  3. Collectible Card Trading
# include <bits/stdc++.h>
using namespace std ;

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

        vector<int> hold(k + 1, -10001) ;
        vector<int> no_card(k + 1, 0) ;
        
        for(int p : allprice){
            for(int i=1;i<=k;i++){
                hold[i] = max(hold[i], no_card[i - 1] - p) ;
                no_card[i] = max(no_card[i], hold[i] + p) ;
            }
        }
        
        cout << no_card[k] << "\n" ;
    }

    
}
