//  Time Limit Exceeded
class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> ans;
        int tmp = 1;

        while (n > 0) {
            int m = tmp;
            while (m % 2 == 0) m /= 2;
            while (m % 3 == 0) m /= 3;
            while (m % 5 == 0) m /= 5;

            if (m == 1) {
                ans.push_back(tmp); 
                n--;                
            }
            tmp++;
        }

        return ans.back();
    }
};