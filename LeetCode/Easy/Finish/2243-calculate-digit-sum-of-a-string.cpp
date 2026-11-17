//  Runtime 0ms(100%), Memory 9.06MB(40.21%)
class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size() > k){
            string tmp = "" ;
            int digits = 0 ; 
            for(int i=1;i<s.size()+1;i++){
                digits += s[i-1] - '0' ;

                if(i % k == 0){
                    tmp += to_string(digits) ;
                    digits = 0 ; // reset  
                }else if(i == s.size()){
                    tmp += to_string(digits) ;
                }
            }

            s = tmp ;
        }
        
        return s ;

    }
};