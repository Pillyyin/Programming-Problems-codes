//  Runtime 0ms(100%), Memory 8.94MB(7.19%)
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum = 0 ;
        int power = columnTitle.size()-1 ;
        for(int i=0;i<columnTitle.size();i++){
            sum += (columnTitle[i] - '@') * pow(26,power) ;
            power-- ;
        }

        return sum ;
    }
};