# include <bits/stdc++.h>
using namespace std;
int main() {
    int N, time, tmp=0 ,odd=0 ,stoptime=0 ;
    cin >> N ;
    for(int i=1;i<N+1;i++){
        cin >> time ;
        if(i%2!=0){
            odd = time ;
        }else if(i%2==0){
            tmp = time - odd ;
            stoptime+= tmp ;
        }
    }
    if(N%2 !=0){
        cout << "still running" << "\n" ;
    }else{
        cout << stoptime << "\n" ;
    }
    return 0 ;
}