/* 
Test.1 TLE

# include <bits/stdc++.h>
using namespace std;
int main() {
    int num, i = 0 ;
    vector<int> n ;

    while(cin >> num){
        n.push_back(num) ;
        sort(n.begin(), n.end()) ;
        i++ ; //幾個數字

        if(i%2 == 1){
            cout << n[i/2] << "\n" ;
        }else{
            cout << ( n[i/2] + n[i/2 - 1] ) / 2 << "\n" ;
        }

        
    }

    return 0 ;
}
*/
# include <bits/stdc++.h>
using namespace std;
int main() {
    int num, i = 0 ;
    vector<int> n ;

    while(cin >> num){
        i++ ; //幾個數字
        for(int j=0;j<i;j++){
            if(num > num[j] num){

            }
        }

        n.push_back(num) ;

        if(i%2 == 1){
            cout << n[i/2] << "\n" ;
        }else{
            cout << ( n[i/2] + n[i/2 - 1] ) / 2 << "\n" ;
        }

        
    }

    return 0 ;
}