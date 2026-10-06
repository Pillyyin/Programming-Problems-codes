//  Runtime 2ms(8.16%), Memory 8.48MB(56.27%)
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st ;
        int moves = 0 ;
        for(char c : s){
            if(!st.empty() && c == ')' && st.top() == '('){
                st.pop() ;
            }else{
                st.push(c) ;
            }
        }

        return st.size() ;
    }
};


//  Runtime 0ms(100%), Memory 8.48MB(56.27%)
class Solution {
public:
    int minAddToMakeValid(string s) {
        int left = 0, right = 0 ;
        for(char c : s){
            if(c == '('){
                left++ ;
            }else if(c == ')' && left != 0){
                left-- ;
            }else{
                right++ ;
            }
        }

        return left + right ;
    }
};