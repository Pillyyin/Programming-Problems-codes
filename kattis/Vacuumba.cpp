# include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m ;
    cin >> n ;
    
    for(int i=0;i<n;i++){
        cin >> m ;

        double x = 0, y = 0 ;
        double angle = 90.0, move = 0, rotate ;
        for(int j=0;j<m;j++){
            cin >> rotate >> move ;
            angle += rotate ;
            x += move * cos(angle * M_PI / 180) ;
            y += move * sin(angle * M_PI / 180) ;
        }

        cout << fixed << setprecision(6) << x << " " << y << "\n" ;
        
    }

    return 0 ;
}
