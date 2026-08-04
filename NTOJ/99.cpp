# include <bits/stdc++.h>
using namespace std;
int main() {
    double A[4] ;
    for(int i=0;i<4;i++){
        cin >> A[i] ;
    }

    if(fabs(A[0]*A[3] - A[1]*A[2]) > 1e-7){
        cout << 1 << "\n" ;
    }else{
        cout << 0 << "\n" ;
    }


    return 0 ;
}