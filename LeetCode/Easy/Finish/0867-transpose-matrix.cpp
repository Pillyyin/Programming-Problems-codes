//  Runtime 0ms(100%), Memory 14.65MB(99.79%)
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);

        int m = matrix[0].size() ;
        int n = matrix.size() ;
        vector<vector<int>> ans(m, vector<int>(n)) ; 
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                ans[j][i] = matrix[i][j] ;
            }
        }

        return ans ;
    }
};