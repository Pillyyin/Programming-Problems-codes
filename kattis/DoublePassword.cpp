# include <bits/stdc++.h>
using namespace std;
int main() {
    string s1, s2 ;
    int count = 0 ;
    cin >> s1 ;
    cin >> s2 ;
    for(int i=0;i<4;i++){
        if(s1[i]!=s2[i])
        count++ ;
    }
    cout << pow(2,count) << "\n" ;
    return 0 ;
}
