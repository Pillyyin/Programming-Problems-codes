# include <bits/stdc++.h>
using namespace std;
int main() {
    int x, y, a, b ; //x=a+b y=a-b
    cin >> x >> y ;
    cout << "a: " << (x+y)/2 << ", " << "b: " << (x-(x+y)/2) ;
    return 0 ;
}