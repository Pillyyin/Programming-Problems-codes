# include <bits/stdc++.h>
using namespace std;
int main() {
    int T ;
    cin >> T ;
    while(T--){
        int n, m ;
        cin >> n >> m ;     //people of cs , ec0

        int iqcs[n], iqeco[m] ;
        double avgCs = 0, avgEco = 0 ; //用double以防沒整除

        for(int i=0;i<n;i++){
            cin >> iqcs[i] ;     //填入cs iq
        }

        for(int j=0;j<m;j++){
            cin >> iqeco[j] ;     //填入eco iq
        }

        int csmin = 200000 ;
        for(int k=0;k<n;k++){
            avgCs += iqcs[k] ;
            if(iqcs[k] < csmin){
                csmin = iqcs[k] ;
            }
        }
        avgCs /= n ;    //cs average iq

        for(int l=0;l<m;l++){
            avgEco += iqeco[l] ;
        }
        avgEco /= m ;   // eco average iq 

        int count = 0 ;
        for(int i=0;i<n;i++){
            if( iqcs[i] > avgEco && iqcs[i] < avgCs ){
                count ++ ;
            }
        }

        cout << count << "\n" ;
    }

    return 0 ;
}