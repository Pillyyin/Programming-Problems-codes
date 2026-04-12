#include <bits/stdc++.h>
using namespace std;

int main(){
    string s ;
    cin >> s ;

    list<char> password ;
    auto mouse = password.begin() ; // ´å¼Ð

    for(char c : s){
        if(c == 'L'){   //¥ª²¾
            if(mouse != password.begin()) mouse-- ; 
        }
        else if(c == 'R'){  //¥k²¾
            if(mouse != password.end()) mouse++ ;
        }
        else if(c == 'B'){
            if(mouse != password.begin()){
                mouse = password.erase(--mouse) ; //§R±¼¹«¼Ð¥ªÃä
            }
        }
        else{
            password.insert(mouse, c) ;
        }
    }

    for(char c : password){
        cout << c ;
    }
}