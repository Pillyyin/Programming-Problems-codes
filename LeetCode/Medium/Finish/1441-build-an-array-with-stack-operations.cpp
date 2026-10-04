//  Runtime 0ms(100%), Memory 10.68MB(86.11%)
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans ;
        int counter = 1, i = 0 ;
        while(i < target.size()){
            if(counter == target[i]){
                ans.push_back("Push") ;
                i++ ;
            }else if(counter < target[i]){
                ans.push_back("Push") ;
                ans.push_back("Pop") ;
                
            }

            counter++ ;
    
        }

        return ans ;
    }
};