//  Runtime 0ms(100%), Memory 9.1MB(55.47%)
class Solution {
public:
    string addStrings(string num1, string num2) {
        int size1 = num1.size()-1, size2 = num2.size()-1 ;
        int carry = 0 ;
        string ans = "" ;
        while(size1 >= 0 || size2 >= 0 || carry > 0){
            int sum = carry ;

            if(size1 >= 0){
                sum += num1[size1] - '0' ;
            }
            if(size2 >= 0){
                sum += num2[size2] - '0' ;
            }
            
            carry = sum / 10 ;
            ans += char((sum % 10) + '0') ;
            
            size1-- ;
            size2-- ;
        }


        reverse(ans.begin(), ans.end()) ;
        return ans ;
    }
};