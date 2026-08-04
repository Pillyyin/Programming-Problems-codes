//	AC (4ms, 3.4MB) 
#include <bits/stdc++.h>
using namespace std ;

int main(){
    int num ; 
    char id[11] ;
    cin >> id ;

    // id to number
    if(id[0] == 'A'){
        num = 10 ;
    }else if(id[0] == 'B'){
        num = 11 ;
    }else if(id[0] == 'C'){
        num = 12 ;
    }else if(id[0] == 'D'){
        num = 13 ;
    }else if(id[0] == 'E'){
        num = 14 ;
    }else if(id[0] == 'F'){
        num = 15 ;
    }else if(id[0] == 'G'){
        num = 16 ;
    }else if(id[0] == 'H'){
        num = 17 ;
    }else if(id[0] == 'I'){
        num = 34 ;
    }else if(id[0] == 'J'){
        num = 18 ;
    }else if(id[0] == 'K'){
        num = 19 ;
    }else if(id[0] == 'L'){
        num = 20 ;
    }else if(id[0] == 'M'){
        num = 21 ;
    }else if(id[0] == 'N'){
        num = 22 ;
    }else if(id[0] == 'O'){
        num = 35 ;
    }else if(id[0] == 'P'){
        num = 23 ;
    }else if(id[0] == 'Q'){
        num = 24 ;
    }else if(id[0] == 'R'){
        num = 25 ;
    }else if(id[0] == 'S'){
        num = 26 ;
    }else if(id[0] == 'T'){
        num = 27 ;
    }else if(id[0] == 'U'){
        num = 28 ;
    }else if(id[0] == 'V'){
        num = 29 ;
    }else if(id[0] == 'W'){
        num = 32 ;
    }else if(id[0] == 'X'){
        num = 30 ;
    }else if(id[0] == 'Y'){
        num = 31 ;
    }else if(id[0] == 'Z'){
        num = 33 ;
    }

    //dertermine
    int det = (num/10)+(num%10*9)+(id[1]-'0')*8+(id[2]-'0')*7+(id[3]-'0')*6+(id[4]-'0')*5+(id[5]-'0')*4+(id[6]-'0')*3+(id[7]-'0')*2+(id[8]-'0')*1+(id[9]-'0');
    if(det % 10 == 0){
        cout << "real" << "\n" ;
    }else{
        cout << "fake" << "\n" ;
    }

    return 0;
}