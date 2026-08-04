/*
AC (1ms, 3.4MB)
注意測資中有 0 0 
*/
# include <bits/stdc++.h>
using namespace std;
int main() {
    long long a, b ;
    while(cin >> a >> b){
        if(a >= b){
            cout << a - b << "\n" ;
        }else if(a < b){
            cout << (long long)(b - a) << "\n" ;
        }
    }
    

    return 0 ;
}