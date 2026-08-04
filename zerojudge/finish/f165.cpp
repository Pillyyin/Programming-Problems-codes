/*
	AC (1ms, 3.4MB)
*/
# include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b ;
    cin >> a >> b ;

    int count = 0 ;
    while(b != 0){
        if(a%b == 0){
            break ;
        }else{
            a-- ;
            count ++ ;
        }
    }

    if(count != 0){
        cout << count << "\n" ;
    }else{
        cout << "OK!" << "\n" ;
    }
    

    return 0 ;
}