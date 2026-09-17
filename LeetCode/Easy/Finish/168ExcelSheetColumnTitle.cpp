//  Runtime 0ms(100%), Memory 7.70MB(91.83%)
class Solution {
public:
    string convertToTitle(int columNumber) {
        
        string ans  ;
        while(columNumber){
            columNumber-- ;
            ans += char(columNumber % 26 + 'A') ;
            columNumber /= 26 ;
            
        }
        
        reverse(ans.begin(), ans.end()) ;
        return ans ;
        
    }
};