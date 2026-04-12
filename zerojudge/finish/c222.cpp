//位元運算子 ^(XOR)，根據題目計算過程可知與XOR用法相同
# include <bits/stdc++.h>
using namespace std;

int add(int a, int b)
{
    int res;
    res = (a ^ b) ;
    return res;
}


int main() {
    int a, b ;
    while(cin >> a >> b){
        int ans = add(a, b) ;
        cout << ans << "\n" ;
    }
    
    return 0 ;
}