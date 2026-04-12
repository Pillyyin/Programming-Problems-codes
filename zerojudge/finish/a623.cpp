# include <bits/stdc++.h>
using namespace std;
int factorial(int x){
    int b=1 ;
    for(int i=1;i<(x+1);i++){
        b = b*i ;
    }
    return b ;
}

int main() {
    int n ,m ;
    while(cin >> n >> m){
        cout << factorial(n)/(factorial(m)*factorial(n-m)) << endl;
    }
    
}