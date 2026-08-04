// I wonder if there's any data on N=P
# include <bits/stdc++.h>
using namespace std;
int main() {
    int N , P , X , Y ;
    cin >> N >> P >> X >> Y ;
    if(N>P){
        cout << P * X << "\n" ;
    }else if(N<P){
        cout << (P * X) + (int)(P/(N-1))*Y << "\n" ;
    }else{ //N==P
        cout << P * X + Y << "\n" ;
    }

    return 0 ;
}
