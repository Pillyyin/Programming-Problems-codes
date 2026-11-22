//  Runtime 10ms(20.18%), Memory 18.35MB(25.12%)
class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> ans(n) ;
        stack<pair<int, int>> st ;
        int id, time_stemp ;

        for(const string& log : logs){
            stringstream ss(log) ;
            string id_str, type, time_str ;

            getline(ss, id_str, ':') ;
            getline(ss, type, ':') ;
            getline(ss, time_str, ':') ;

            id = stoi(id_str) ;
            time_stemp = stoi(time_str) ;
            

            if(type == "start"){
                st.push({time_stemp, 0}) ;
            }else{
                int total = time_stemp - st.top().first + 1 ;
                int taken = st.top().second ;
                ans[id] += total - taken ;
                st.pop() ;

                if(!st.empty()){
                    st.top().second += total ;
                }
            }
            
        }

        return ans ;
    }
};