//  Runtime 12ms(14.62%), Memory 15.51MB(66.38%)
class Solution {
public:
    int minInsertions(string s) {
        int open = 0, half = 0, ans = 0 ;
        for(char c : s){
            if(c == '('){
                if(half > 0){
                    ans += half;  
                    half = 0;
                }
                open++;
            }else if(c == ')' && half > 0){
                half -- ;
            }else if(c == ')' && half == 0 && open > 0){
                half ++ ;
                open -- ;
            }else if(c == ')' && half == 0 && open == 0){
                ans ++ ;
                half ++ ;
            }
        }
        
        ans += half + open * 2 ;
        return ans ; 
        
    }
};