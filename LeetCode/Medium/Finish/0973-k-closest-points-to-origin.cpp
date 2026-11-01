//  Runtime 85ms(31.36%), Memory 83.87MB(19.83%)
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, greater<pair<int, vector<int>>>> pq ;
        for(auto &p : points){
            int distance = p[0] * p[0] + p[1] * p[1] ;
            pq.push({distance, p}) ;
        }

        vector<vector<int>> ans ;
        for(int i=0;i<k;i++){
            ans.push_back(pq.top().second) ;
            pq.pop() ;
        }

        return ans ;
    }
};