#include <bits/stdc++.h>
using namespace std ;
int main(){
    long long N ;
    cin >> N ;
    if(N%2==0){ // even
        cout << (N/2+1)*(N/2+1) << "\n" ;
    }else if(N==1){ //N==1
        cout << 2 << "\n" ;
    }else{ //odd
        long long  tmp = (N-1)/2 ; 
        cout << (tmp+2)*(tmp+1) <<"\n" ;
    }
    return 0 ;
}

/* first time fail 
#include <bits/stdc++.h>
using namespace std ;
int main(){
    long long N ;
    cin >> N ;
    if(N%2==0){ // even
        cout << pow(N/2+1,2) << "\n" ;
    }else if(N==1){ //N==1
        cout << 2 << "\n" ;
    }else{ //odd
        double tmp = static_cast<double>(N) ; //int to float
        cout << ( ((tmp/2)+1.5) * ((tmp/2)+0.5) )<<"\n" ;
    }
    return 0 ;
}
*/
