/*
記得要double，第一次交的時候忘了
AC (1ms, 332KB) 
*/
# include <bits/stdc++.h>
using namespace std;
int main() {
    double a,b,c,d,e,f ;
    cin >> a >> b >> c >> d >> e >> f ;
    if((a*e)-(b*d)!=0){
        cout << "x=" << fixed  << setprecision(2) << float((c*e-b*f)/(a*e-b*d)) << "\n" ;
        cout << "y=" << fixed  << setprecision(2) << float((a*f-c*d)/(a*e-b*d)) << "\n" ;
    }else if((a*e-b*d)==0&&(c*e-b*f)==0&&(a*f-c*d)==0){
        cout << "Too many" ;
    }else{
        cout << "No answer" ;
    }
}