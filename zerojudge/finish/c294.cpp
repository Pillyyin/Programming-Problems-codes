# include <bits/stdc++.h>
using namespace std;
int main() {
    int  a, b, c, s[3]= {0} ; //ªì©l¤Æ
    for(int i=0;i<3;i++){
        cin >> s[i] ;
    }
    sort(s, s+3);
    for(int n=0;n<3;n++){
        cout << s[n] << " " ;
    }
    a = s[0] ;
    b = s[1] ;
    c = s[2] ;
    cout << "\n" ;
    if(a+b < c || a+b == c){
        cout << "No" << "\n" ;
    }else if((a*a) + (b*b) < (c*c)){
        cout << "Obtuse" << "\n" ;
    }else if((a*a) + (b*b) == (c*c)){
        cout << "Right" << "\n" ;
    }else if((a*a) + (b*b) > (c*c)){
        cout << "Acute" << "\n" ;
    }
    return 0 ;
}