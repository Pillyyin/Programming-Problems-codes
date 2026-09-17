//  using complement to caculate negative number
//  Runtime 0ms(100%), Memory 7.92MB(7.92%)
class Solution {
public:
    string toHex(unsigned int num) {

        string hex ;
        string table = "0123456789abcdef" ;
        int remainder = 0 ;

        if(num == 0) return "0" ;

        while(num > 0){
            remainder = num % 16 ;
            hex.insert(0, 1, table[remainder]) ;
            num /= 16 ; 

        }

        return hex ;

    }
};


//  Runtime 0ms(100%), Memory 8.05MB(7.92%)
class Solution {
public:
    string toHex(unsigned int num) {

        string hex ;
        string table = "0123456789abcdef" ;
  
        if(num == 0) return "0" ;

        while(num > 0){
            hex.push_back(table[num % 16]) ;
            num /= 16 ; 

        }
        
        reverse(hex.begin(), hex.end()) ;
        return hex ;

    }
};