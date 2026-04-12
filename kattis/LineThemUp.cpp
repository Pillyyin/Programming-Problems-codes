//¦r¨å§Ç
# include <bits/stdc++.h>
using namespace std;
int main() {
    int n ;
    cin >> n ;

    string name[n] ;
    for(int i=0;i<n;i++){
        cin >> name[i] ;
    }

    //§PÂ_«e«á¦r¨å§Ç¤j¤p
    int count = 0 ;
    for(int i=0;i<n-1;i++){
        if(name[i] > name[i+1]){
            count -- ;
        }else if(name[i] < name[i+1]){
            count ++ ;
        }
    }

    //cout
    if(count == -(n-1)){
        cout << "DECREASING" << "\n" ;
    }else if(count == n-1){
        cout << "INCREASING" << "\n" ;
    }else{
        cout << "NEITHER" << "\n" ;
    }

    return 0 ;
}