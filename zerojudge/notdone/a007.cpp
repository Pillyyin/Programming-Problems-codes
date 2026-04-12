/*
Test.1 TLE (2s)
# include <bits/stdc++.h>
using namespace std;
int main() {
    int num ;
    while(cin >> num){
        bool prime ;
        for(int i=2;i*i<=num;i++){
            if(num%i == 0){
                prime = false ;
                break ;
            }else{
                prime = true ;
            }
        }

        if(prime){
            cout << "借计" << "\n" ;
        }else{
            cout << "獶借计" << "\n" ;
        }

    }

    return 0 ;
}
*/

# include <bits/stdc++.h>
using namespace std;
int main() {
    int num ;
    while(cin >> num){
        bool prime ;
        for(int i=2;i*i<=num;i++){
            if(num%i == 0){
                prime = false ;
                break ;
            }else{
                prime = true ;
            }
        }

        if(prime){
            cout << "借计" << "\n" ;
        }else{
            cout << "獶借计" << "\n" ;
        }

    }

    return 0 ;
}