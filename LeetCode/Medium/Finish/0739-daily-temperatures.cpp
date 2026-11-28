//  Runtime 30ms(24.29%), Memory 107.11MB(52.59%)
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(), 0) ;
        stack<int> monost ;
        
        for(int i=0;i<temperatures.size();i++){
            while(!monost.empty() && temperatures[i] > temperatures[monost.top()]){
                ans[monost.top()] = i - monost.top() ;
                monost.pop() ;
            }
            monost.push(i) ;
        }

        return ans ;

    }
};

//  TLE
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans ;
        for(int i=0;i<temperatures.size();i++){
            int count = 0 ;

            for(int j=i+1;j<temperatures.size();j++){
                count ++ ;

                if(temperatures[j] > temperatures[i]){
                    ans.push_back(count) ;
                    break ; 
                }else if(j == temperatures.size() - 1){
                    ans.push_back(0) ;
                }                
            }
        }

        ans.push_back(0) ;  //   last

        return ans ;

    }
};