// Runtime 0ms, Memory 11.73MB
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string prefix = strs[0] ; // The first one serves as the standard.
        
        for(int i=1;i<strs.size();i++){

            for(int j=0;j<prefix.size();j++){ // determine char

                if(strs[i][j] != prefix[j]){
                    prefix.resize(j) ;
                    break ; 
                }
            }
            
        }

        return prefix ;
    }
};