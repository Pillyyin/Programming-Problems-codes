//  Runtime 2123ms(5.25%), Memory 7.79MB(55.37%)
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0 ;
        for(int i=1;i<num;i++){
            if(num % i == 0){
                sum += i ;
            }
        }

        return num == sum ;
    }
};


//  Runtime 0 ms(100%), Memory 7.82MB(21.35%)  
class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num == 1) return false ;
        int sum = 1 ;
        for(int i=2;i*i<num;i++){
            if(num % i == 0){
                sum += i + num/i ;
            }
        }

        return num == sum ;
    }
};

//  AI special solution #Mersenneprime
class Solution {
public:
    bool checkPerfectNumber(int num) {
        return num == 6 || num == 28 || num == 496 || num == 8128 || num == 33550336;
    }
};