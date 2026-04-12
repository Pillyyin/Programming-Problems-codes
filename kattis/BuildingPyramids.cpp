# include <bits/stdc++.h>
using namespace std;
int main() {
    int N=0, level=0, block=0, tmp=0  ;
    cin >> N ; //實際積木數
    for(int i=1;i<10000;i=i+2){ //i=理論需要的總積木數
        level ++ ;
        block = i*i ;
        tmp+=block ; //tmp為蓋到第n層時總需要的方塊數
        if(N < tmp){
            cout << level-1 << "\n" ;
            break ;
        }
    }
    return 0 ;
}