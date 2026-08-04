# include <bits/stdc++.h>
using namespace std;
int main() {
    int n ;
    cin >> n ;  //放假天數

    int temp[n] ;
    for(int i=0;i<n;i++){
        cin >> temp[i] ;   
    }

    
    int hikeday = 1, hottest = 41;
    for(int i=0;i<n-2;i++){ //find hikeday
        int hotday = max(temp[i],temp[i+2]) ; //比較前後哪個熱
        if(hotday < hottest){
            hottest = hotday ; //較熱天氣溫存入最熱讓後面的比較
            hikeday = i+1  ; 
        }
    }


    cout << hikeday << " " << hottest << "\n" ;

    return 0 ;
}
