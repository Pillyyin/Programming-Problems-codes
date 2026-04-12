# include <bits/stdc++.h>
using namespace std;
int main() {
    int W, N, L, area = 1, w, l ;
    cin >> W >> N ;

    for(int i = 0 ; i < N ; i++){
        cin >> w >> l ;
        area += w*l ;
    }

    L = area / W ;
    cout << L << "\n" ;

    return 0 ;
}