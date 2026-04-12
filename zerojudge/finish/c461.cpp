/* 
apcs 邏輯運算子 (Logic Operators)
AC (1ms, 316KB)
雙驚嘆號使用：一個!可以把0變1，非0變0(NOT)。雙驚嘆號則再做一遍
*/	
# include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c ;
    while(cin >> a >> b >> c){
        bool impossible = true ;
        //AND
        if((!!a & !!b) == c){
            cout << "AND" << "\n" ;
            impossible = false ;
        }
        //OR
        if((!!a | !!b) == c){
            cout << "OR" << "\n" ;
            impossible = false ;
        }
        //XOR
        if((!!a ^ !!b) == c){
            cout << "XOR" << "\n" ;
            impossible = false ;
        }
        // impossible
        if(impossible){
            cout << "IMPOSSIBLE" << "\n" ;
        }

    }

    return 0 ;
}