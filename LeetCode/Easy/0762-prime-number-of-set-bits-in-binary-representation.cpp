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
            bool is_prime = true ;
            if(setbits == 0 || setbits == 1){
                is_prime = false ;
            }else{
                for(int k=2;k<=sqrt(setbits);k++){
                    if(setbits % k == 0){
                        is_prime = false ;
                        break;
                    }
                }
            }

            if(is_prime) prime++ ;
        }

        return prime ;
    }
};