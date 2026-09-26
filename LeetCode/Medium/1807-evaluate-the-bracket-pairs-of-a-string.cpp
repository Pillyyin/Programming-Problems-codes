class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unorder_map<string, string> str_map ;
        for(int i=0;i<knowledge.size();i++){
            str_map[knowledge[i][0]] = knowledge[i][1] ;
        }
    }
};