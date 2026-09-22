//  Runtime 0ms(100%), Memory 9.63MB(78.39%)
class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0 ;
        for(int i=0;i<s.size();i++){
            sum += ('z' - s[i] + 1) * (i + 1) ; 
        }
        return sum ;
    }
};