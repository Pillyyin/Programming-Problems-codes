//  Runtime 8ms(38.21%), Memory 30.90MB(34.35%)
class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        
        unordered_set<int> type ;
        int n = digits.size() ;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if (i == j || j == k || i == k) continue;
                    if(digits[k] % 2 == 0 && digits[i] != 0){
                        type.insert(100 * digits[i] + 10 * digits[j] + digits[k]) ;
                    }
                    
                }
            }
        }

        return type.size() ;

    }
};