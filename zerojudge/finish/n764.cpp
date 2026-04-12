//map¿≥•Œ°Astringstream
# include <bits/stdc++.h>
using namespace std;
int main() {
    map<string, string> mp ;
    string line ;

    while(getline(cin, line) && line != ""){
        string word, key ;
        stringstream ss(line) ;
        ss >> word >> key ;
        mp[key] = word ;
    }

    string ans ;
    while(cin >> ans){
        auto it = mp.find(ans) ;
        if(it == mp.end()){
            cout << "eh" << "\n" ;
        }else{
            cout << (*it).second << "\n" ;
        }
    }

    return 0 ;
}