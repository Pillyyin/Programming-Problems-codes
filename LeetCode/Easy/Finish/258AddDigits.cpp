/*Runtime 2ms(5.13%), Memory 8.78MB(7.60%)

class Solution {
public:
    int addDigits(int num) {
       
        while(num >= 10){
            int sum = 0 ;
            while(num > 0){
                sum += num % 10 ;
                num /= 10 ;
            }
            num = sum ; //  next round 
        }
        
        return num ;

    }
};

*/

//  Runtime 0ms(100%), Memory 8.63MB(45.39%)
class Solution {
public:
    int addDigits(int num) {
        
        if(num == 0) return 0 ;
        return num % 9 == 0 ? 9 : num % 9 ;

    }
};