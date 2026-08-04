#include <bits/stdc++.h>
using namespace std;

int main(){
    string s ;
    cin >> s ;

    list<char> password ;
    auto mouse = password.begin() ; // 游標

    for(char c : s){
        if(c == 'L'){   //左移
            if(mouse != password.begin()) mouse-- ; 
        }
        else if(c == 'R'){  //右移
            if(mouse != password.end()) mouse++ ;
        }
        else if(c == 'B'){
            if(mouse != password.begin()){
                mouse = password.erase(--mouse) ; //刪掉鼠標左邊
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
