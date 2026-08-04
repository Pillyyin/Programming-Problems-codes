# include <bits/stdc++.h>
using namespace std;
int main() {
    int b, d, c, l, B, D, C  ;
    cin >> b >> d >> c >> l ;
    while(l>0){
        for(int i=0;i<l/b;i++){
            B ++ ;
            l -= b ;
            for(int j=0;j<l/b;j++){
                D ++ ;
                l -= d ; 
                for(int k=0;k<l/b;k++){
                    C ++ ;
                    l -= C ;
                }
            }   
        }
       if(l == 0){
            break ;
       }
    }

     cout << B << " " << " " <<D << " " << C ;

    return 0 ;
}
