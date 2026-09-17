//  sum of the first n odd numbers
//  Runtime 0ms(100%), Memory 7.72MB(53.61%)
class Solution {
public:
    bool isPerfectSquare(int num) {
        int odd = 1 ;
        while(num > 0){
            num -= odd ;
            odd += 2 ;
        }

        if(num < 0){
            return false ;
        }else{
            return true ;
        }
        
    }
};