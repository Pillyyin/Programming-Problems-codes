/*
AI給的純數學公式：(n3次方+5n+6)/6
	AC (3ms, 328KB)
*/
# include <bits/stdc++.h>
using namespace std;
int main() {
    long long n ;
    while(cin >> n){
        cout << (long long)((pow(n,3) + (5*n) + 6 ) / 6) << "\n"  ;
    }
}