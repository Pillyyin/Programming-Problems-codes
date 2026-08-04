/*
	AC (1ms, 3.2MB)
*/
# include <bits/stdc++.h>
using namespace std;
int main() {
    int n, score ;
    while(cin >> n){
        double avg = 0 ;
        for(int i=0;i<n;i++){
            cin >> score ;
            avg += score ;
        }

        avg /= n ;

        if(avg > 59){
            cout << "no" << "\n" ;
        }else{
            cout << "yes" << "\n" ;
        }
    }
    

    return 0 ;
}