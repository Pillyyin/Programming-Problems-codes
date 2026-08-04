/*
	AC (1ms, 3.2MB)
*/
#include <bits/stdc++.h>
using namespace std ;

int main(){
    int first, last, d ;
    cin >> first >> last >> d ;

    //公差有負數所以條件用不等於，不要用小於
    for(int i=first;i!=last+d;i+=d){
        cout << i << " " ;
    }

    return 0;
}