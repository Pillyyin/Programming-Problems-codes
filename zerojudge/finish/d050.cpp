# include <bits/stdc++.h>
using namespace std;
int main() {
    int time ;
    cin >> time ;
    if(time<15){
        time=24+time ;
        cout << time-15 ;
    }else{
        cout << time-15 ;
    }
}