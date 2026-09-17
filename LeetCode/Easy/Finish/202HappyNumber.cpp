//  Runtime 0ms(100%), Memory 8.23MB(49.47%)
//  n = 4 will be infinite loop
class Solution {
public:
    bool isHappy(int n) {
        
        unordered_set<int> s ;
        while(n >= 4){
            int sum = 0 ;
            while(n > 0){
                sum += (n % 10) * (n % 10) ;
                n /= 10 ;
            }

            n = sum ; //  next round 

            // Determine whether any numbers reappear
            if(s.count(n)){
                return false ;
            }
            s.insert(n) ;
        }
        
        return n == 1 ;

    }
};