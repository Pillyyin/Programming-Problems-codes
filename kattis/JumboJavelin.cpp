//-1cm every fused
# include <bits/stdc++.h>
using namespace std;
int main() {
    int N, rods=0, tmp=0, k=-1 ;
    cin >> N ;
    for(int i=0;i<N;i++){
        cin >> rods ;
        tmp+=rods ;
        k++;
    }
    cout << tmp-k << "\n" ;
    return 0 ;
}
