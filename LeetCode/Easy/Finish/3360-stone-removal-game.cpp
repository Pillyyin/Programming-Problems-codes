//  Runtime 0ms(100%), Memory 7.70MB(72.34%)
class Solution {
public:
    bool canAliceWin(int n) {
        int count = 0 ;
        for(int i=10;i>=0;i--){
           if(n < 0){
               break ;
            }

            n -= i ;
            count++ ;
        }

        return count % 2 == 0 ;

    }
};