# include <bits/stdc++.h>
using namespace std;
int main() {
    int N, W, H ;
    cin >> N >> W >> H ;

    int num[N] ;
    for(int i=0;i<N;i++){
        cin >> num[i] ;
    }

    double max = sqrt(W*W+H*H) ;
    for(int i=0;i<N;i++){
        if(num[i] <= max){
            cout << "DA" << "\n" ;
        }else if(num[i] > max){
            cout << "NE" << "\n" ;
        }
    }

    return 0 ;
}