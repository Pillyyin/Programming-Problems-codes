//  Runtime 0ms(100%), Memory 9.76MB(77.39%)
class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int Right, Left, Top, Buttom ;
        Right = min(rec1[2], rec2[2]) ;
        Left = max(rec1[0], rec2[0]) ;
        Top = min(rec1[3], rec2[3]) ;
        Buttom = max(rec1[1], rec2[1]) ;

        if(Left < Right && Buttom < Top){
            return true ;
        }else{
            return false ;
        }

    }
};