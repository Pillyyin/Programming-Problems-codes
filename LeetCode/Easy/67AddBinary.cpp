// Runtime 0ms(100%), Memory 9.04MB(31.71%)

class Solution {
public:
    string addBinary(string a, string b) {

        int index_a = a.size()-1, index_b = b.size()-1 ;
        int carry = 0 ;
        string ans = "" ;

        while(index_a >= 0 || index_b >= 0 ||carry > 0){
            if(index_a >= 0){
                carry += a[index_a] - '0' ;
                index_a-- ;
            }

            if(index_b >=0){
                carry += b[index_b] - '0' ;
                index_b-- ;
            }

            ans += (carry%2) + '0' ;
            carry /= 2 ;

        }

        reverse(ans.begin(), ans.end()) ;
        return ans ;
            
    }
};


/*

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"

*/