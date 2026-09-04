# include <bits/stdc++.h>
using namespace std;

class Box
{
    public:
        int length ;
        int width ;
        int height ;

        double Volume(void){
            return length * width * height ;
        }
};

int main() {
    Box box1 ;

    box1.length = 100 ;
    box1.height = 3 ;
    box1.width = 2 ;
    double volume = box1.Volume() ;
    cout << volume << "\n" ;

}