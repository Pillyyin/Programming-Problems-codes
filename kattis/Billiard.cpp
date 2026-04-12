# include <bits/stdc++.h>
using namespace std;
int main() {
    double a, b, s, m, n ;
    while(cin >> a >> b >> s >> m >> n){
        if(a==0 && b==0 && s==0 && m==0 && n==0){
            break ;
        } 
        double Vx = a*m / s ;
        double Vy = b*n / s ;
        double angle = atan(Vy / Vx) * 180 / M_PI ;
        double V = sqrt(Vx*Vx + Vy*Vy) ;
        cout << fixed << setprecision(2) << angle << " " << V << "\n" ;

    }
    
    return 0 ;
}