# include <bits/stdc++.h>
using namespace std;
int main() {
    int month ;
    cin >> month ;
    if(2<month && month<6){
        cout << "Spring!" << "\n" ;
    }else if(5<month && month<9){
        cout << "Summer!" << "\n" ;
    }else if(8<month && month<12){
        cout << "Autumn!" << "\n" ;
    }else{
        cout << "Winter!" << "\n" ;
    }
    return 0 ;
}