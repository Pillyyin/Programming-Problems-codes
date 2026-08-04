# include <bits/stdc++.h>
using namespace std;
int main() {
    string fool, real ;
    getline(cin , fool) ;
    int sizefool = fool.size() ;
    for(int i=0;i<sizefool;i++){ 
        real += fool[i] ; //存入real
        //判斷母音
        if(fool[i] == 'a' || fool[i] == 'e' || fool[i] == 'i' || fool[i] == 'o' || fool[i] == 'u'){
            i += 2 ; //跳過亂加的p和母音
        }
    }
    
        cout << real << "\n" ;

    return 0 ;
}
