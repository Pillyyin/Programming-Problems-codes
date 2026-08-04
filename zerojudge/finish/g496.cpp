/*
    題目很有趣XD
	AC (1ms, 312KB)
*/
# include <bits/stdc++.h>
using namespace std;
int main() {
    int A, B ;
    cin >> A >> B ;
    
    if(B % A == 0){
        cout << B / A << "\n" ;
    }else{
        cout << (B / A) + 1 << "\n" ; 
    }

    return 0 ;
}