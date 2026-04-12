
# include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, h, times=0 ;
    cin >> a >> b >> h ;

    while(h > 0){
        h = h - a ;
        times++ ;
        if(h == 0 || h < 0){ // 如果剛好到達或超過就break
            break ;
        }
        h = h + b ;
    }
        
    cout << times << "\n" ;

    return 0 ;
}