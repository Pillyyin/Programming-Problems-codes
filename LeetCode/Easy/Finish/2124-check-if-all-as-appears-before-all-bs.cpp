//  Runtime 0ms(100%), Memory 8.38MB(17.96%)
class Solution {
public:
    bool checkString(string s) {
        bool before = true ;
        int firstb = 101 ;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'b'){
                firstb = i ;
            }else if(i > firstb && s[i] == 'a'){
                before = false ;
                break ;
            }
        }

        return before ;
    }
};