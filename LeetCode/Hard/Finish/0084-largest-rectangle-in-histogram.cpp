//  Runtime 15ms(91.59%), Memory 79.25MB(96.74%)
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int max_rec = 0 ;
        
        stack<int> monost ;
        heights.push_back(0) ;

        for(int i=0;i<heights.size();i++){

            while(!monost.empty() && heights[monost.top()] >= heights[i]){
                int height = heights[monost.top()] ;
                int left = -1, right ;
                monost.pop() ;
                
                if(monost.empty()){
                    left = -1 ;
                }else{
                    left = monost.top() ;
                }
                
                right = i ;
                int width = right - left - 1 ;
                max_rec = max(height * width, max_rec) ;
            }

            monost.push(i) ;
        }

        return max_rec ;
    }
};