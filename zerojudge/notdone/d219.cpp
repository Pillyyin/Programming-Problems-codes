# include <bits/stdc++.h>
using namespace std;

long long mod_pow(long long B, long long P, long long M){
    long long ans = 1;
    B %= M;

    while(P > 0){
        if(P % 2 == 1){
            ans = (ans * B) % M;
        }
        B = (B * B) % M;
        P /= 2;
    }

    return ans;
}


int main() {
    long long B, P, M ;
    while(cin >> B >> P >> M ){
        cout << mod_pow(B, P, M) << "\n" ;
    }

    return 0 ;
}