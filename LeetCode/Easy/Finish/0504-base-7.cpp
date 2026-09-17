//  Runtime 0ms(100%), Memory 7.73MB(81.60%)
class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return "0" ;

        bool is_nagative = num < 0 ;
        string base7 ;
        num = abs(num) ;

        while(num != 0){
            base7 += num % 7 + '0' ;
            num /= 7 ;
        }

        if(is_nagative){
            base7 += "-" ;
        }

        reverse(base7.begin(),base7.end()) ;
        return base7 ;
    }
};