//pqrstuvwxyz都正確
# include <bits/stdc++.h>
using namespace std;

bool determine(string s){
    int need = 1 ;  //需要的句子數
    for(char c : s){
        if(need == 0){
            return false ;
        }
        if(c >= 'p' && c <= 'z'){
             need -- ;  //一個句子
        }else if(c == 'N'){
            //不影響
        }else if(c == 'C' || c == 'D' || c == 'E' || c == 'I'){
            need ++ ;
        }else{
            return false ;
        }
    }
    return need == 0 ; //reset
}


int main() {
    string s ;
    while( cin >> s ){
        if(determine(s)){
            cout << "YES" << "\n" ;
        }else{
            cout << "NO" << "\n" ;
        }
        
    }
    

    
    

    return 0 ;
}