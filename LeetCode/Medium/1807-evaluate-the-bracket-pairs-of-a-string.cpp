//  Runtime 104ms(35.51%), Memory 122.70MB(76.01%)
class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> str_map ;
        for(const auto& item : knowledge){
            str_map[item[0]] = item[1] ;
        }

        string ans = "" ;
        string key = "" ;
        bool is_key = false ;

        for(char c : s){
            if(c == '('){
                is_key = true ;
            }else if(c == ')'){
                is_key = false ;

                auto it = str_map.find(key) ;
                if(it != str_map.end()){
                    ans += it -> second ;
                }else{
                    ans += "?" ;
                }

                key = "" ;

            }else{
                if(is_key){
                    key += c ;
                }else{
                    ans += c ;
                }
            }
        }

        return ans ;
    }
};