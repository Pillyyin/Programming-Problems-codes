# include <bits/stdc++.h>
using namespace std;
int main() {
    int N=0, level=0, block=0, tmp=0  ;
    cin >> N ; //總共有多少方塊
    for(int i=1;i<10000;i=i+2){ //i = 該層所需要的單邊長度
        level ++ ;
        block = i*i ;
        tmp+=block ; //tmp 等於到第 n 層總共需要累積的方塊數
        if(N < tmp){
            cout << level-1 << "\n" ;
            break ;
        }
    }
    return 0 ;
}
