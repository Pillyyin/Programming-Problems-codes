//  Runtime 6ms(45.55%), Memory 7.88MB(84.03%)
class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int prime = 0 ;
        for(int i=left;i<=right;i++){
            int setbits = 0 ;
            int n = i ;
            while(n > 0){
                setbits += n % 2 ;
                n /= 2 ; 
            }


            //  determine prime
            if(setbits == 2 || setbits == 3 || setbits == 5 || setbits == 7 || setbits == 11 || setbits == 13 || setbits == 17 || setbits == 19){
                prime++ ;
            }

            
        }

        return prime ;
    }
};