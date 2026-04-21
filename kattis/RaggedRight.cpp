# include <bits/stdc++.h>
using namespace std;
int main() {
    string text ; 
    int M = 0, score = 0, diff = 0, count = 0 ;
    int allsize[100] ;
    while(getline(cin, text)){  //讀整行
        
        int textsize = text.size() ;
        
        allsize[count] = text.size() ;
        if(textsize > M){
            M = text.size() ;
        }
        count++ ;
    }

    for(int i=0;i<count-1;i++){ //最後一行不用算
        diff = pow((M - allsize[i]),2)  ;
        score += diff ;
    }

    cout << score << "\n" ;

    return 0 ;
}
