# include <bits/stdc++.h>
using namespace std;
int main() {
    int n, thisyear, tmp = 0, snowed = -1 ;
    cin >> n >> thisyear ;
    int snowdays[n] ;
    for(int i=0;i<n;i++){
        cin >> snowdays[i] ;
    }

    for(int j=0;j<n;j++){
        if(snowdays[j] <= thisyear){
            snowed = j ;
            break ;
        }else{
            tmp = 1 ;
        }
    }
    
    if(snowed != -1){
        cout << "It hadn't snowed this early in " << snowed << " years!" << "\n" ;
    }else if(tmp == 1){
        cout << "It had never snowed this early!" << "\n" ;
    }

    return 0 ;
}
