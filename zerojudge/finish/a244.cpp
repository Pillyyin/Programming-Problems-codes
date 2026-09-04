/* 
    AC (16ms, 3.5MB) 
    for and if,else if

# include <bits/stdc++.h>
using namespace std;
int main() {
    long long N,a,b,c ;
    cin >> N ;
    for(int i=0;i<N;i++){
        cin >> a >> b >> c ;
        if(a==1){
            cout << b+c << endl ;
        }else if(a==2){
            cout << b-c << endl ;
        }else if(a==3){
            cout << b*c << endl ;
        }else if(a==4){
            cout << b/c << endl ;
        }
    }
}

*/

// AC (17ms, 3.4MB) switch
#include <bits/stdc++.h>
using namespace std ;

int main(){
    
    long long N, a, b, c ;
    cin >> N ;

    for(int i=0;i<N;i++){
        cin >> a >> b >> c ;

        switch (a)
        {
        case 1:
            cout << b + c << "\n" ;
            break;
        case 2:
            cout << b - c << "\n" ;
            break;
        case 3:
            cout << b * c << "\n" ;
            break;
        case 4:
            cout << b / c << "\n" ;
            break;
        }
    }

    return 0;
}