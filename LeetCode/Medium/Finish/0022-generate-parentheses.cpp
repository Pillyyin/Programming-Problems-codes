//  Runtime 0ms(100%), Memory 15.73MB(35.81%)
class Solution {
public:
    void dfs(int left, int right, int n, string s, vector<string>& ans){
            
        if(s.length() == 2*n){
                ans.push_back(s) ;
                return ;
            }

        if(left < n){
            dfs(left + 1, right, n, s+"(", ans) ;
        }

        if(right < left){
            dfs(left, right + 1, n, s+")", ans) ;
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans ;
        dfs(0, 0, n, "", ans) ;
        return ans ;

    }
};