// Seive of Eratisthenes

/* TLE(n = 3756218)
class Solution {
public:

    int countPrimes(int n) {
        vector<bool> is_prime(n + 1, true) ; // +1 for 0
        is_prime[0] = is_prime[1] = false  ;

        if (n <= 2){    // 0 and 1 isn't prime
            return 0 ; 
        }

        //  Seive of Eratisthenes
        for(int i=2;i*i<n;i++){
                if(!is_prime[i]){
                    continue ;
                }
                for(int j=i*i;j<=n;j+=i){
                    is_prime[j] = false ;
                }
            }


        int count = 0 ;
        for(int k=2;k<n;k++){
            if(is_prime[k] == true){
                count++ ;
            }
        }

        return count ;
    }
};
*/

// Runtime 879ms, Memory 40.50MB
class Solution {
public:

    int countPrimes(int n) {

        if (n <= 2){    // 0 and 1 isn't prime
            return 0 ; 
        }

        vector<bool> is_prime(n + 1, true) ; // +1 for 0
        is_prime[0] = is_prime[1] = false  ;

        // even isn't prime
        for (int i = 4; i < n; i += 2) {
            is_prime[i] = false;
        }

        //  Seive of Eratisthenes(only odd number)
        for(int i=3;i*i<n;i+=2){
                if(!is_prime[i]){
                    continue ;
                }

                //find odd multiple of prime number(e.g. 3*3 -> 3*5 )
                for(int j=i*i;j<n;j+=2*i){
                    is_prime[j] = false ;
                }
            }


        int count = 0 ;
        for(int k=2;k<n;k++){
            if(is_prime[k] == true){
                count++ ;
            }
        }

        return count ;
    }
};