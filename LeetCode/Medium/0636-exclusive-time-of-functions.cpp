class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> ans(n) ;
        stack<int> st ;
        int prev_time ;

        for(const string& log : logs){
            streamstring ss(log) ;
            string id_str, type, time_str ;

            getline(ss, id_str, ':') ;
            getline(ss, type, ':') ;
            getline(ss, time_str, ':') ;

            int id = stoi(id_str) ;
            int time_stemp
        }
    }
};