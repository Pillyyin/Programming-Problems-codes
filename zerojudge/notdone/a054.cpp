/*	1st 67% output要依照英文字母輸出
#include <bits/stdc++.h>
using namespace std ;

int main(){
    int num ; 
    char id[10] ;
    cin >> id ;

    int s, m, c ;
    c = id[8] - '0' ;
    s = (id[0]-'0')*8+(id[1]-'0')*7+(id[2]-'0')*6+(id[3]-'0')*5+(id[4]-'0')*4+(id[5]-'0')*3+(id[6]-'0')*2+(id[7]-'0')*1 ; 

    for(int i=10;i<36;i++){
        if( 10-(( s+(i/10)*1+(i%10)*9 )%10) == c){
            if(i==10){
                cout << 'A' ;
            }
            if(i==11){
                cout << 'B' ;
            }
            if(i==12){
                cout << 'C' ;
            }
            if(i==13){
                cout << 'D' ;
            }
            if(i==14){
                cout << 'E' ;
            }
            if(i==15){
                cout << 'F' ;
            }
            if(i==16){
                cout << 'G' ;
            }
            if(i==17){
                cout << 'H' ;
            }
            if(i==34){
                cout << 'I' ;
            }
            if(i==18){
                cout << 'J' ;
            }
            if(i==19){
                cout << 'K' ;
            }
            if(i==20){
                cout << 'L' ;
            }
            if(i==21){
                cout << 'M' ;
            }
            if(i==22){
                cout << 'N' ;
            }
            if(i==35){
                cout << 'O' ;
            }
            if(i==23){
                cout << 'P' ;
            }
            if(i==24){
                cout << 'Q' ;
            }
            if(i==25){
                cout << 'R' ;
            }
            if(i==26){
                cout << 'S' ;
            }
            if(i==27){
                cout << 'T' ;
            }
            if(i==28){
                cout << 'U' ;
            }
            if(i==29){
                cout << 'V' ;
            }
            if(i==32){
                cout << 'W' ;
            }
            if(i==30){
                cout << 'X' ;
            }
            if(i==31){
                cout << 'Y' ;
            }
            if(i==33){
                cout << 'Z' ;
            }
            
        }
    }
    
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std ;

int main(){
    int num ; 
    char id[10] ;
    cin >> id ;

    int s, m, c ;
    c = id[8] - '0' ;
    s = (id[0]-'0')*8+(id[1]-'0')*7+(id[2]-'0')*6+(id[3]-'0')*5+(id[4]-'0')*4+(id[5]-'0')*3+(id[6]-'0')*2+(id[7]-'0')*1 ; 

    string alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
    int val[] = {10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33} ;
    
    for(int i=0;i<26;i++){
        int v = val[i] ;

        if( 10 - (( s+(v/10)*1+(v%10)*9 % 10 )%10) == c){
            cout << alp[i] ;
        }
    }
    
    return 0;
}