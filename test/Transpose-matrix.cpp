#include <bits/stdc++.h>
using namespace std ;

int main(){
    struct Element{
            int row ;
            int col ;
            int value ;
        };

        int n, currentb ;
        vector<Element> a ; //  before transpose
        vector<Element> b ; //  after tanspose

        n = a[0].value ;
        b[0].row = a[0].col ;
        b[0].col = a[0].row ;
        b[0].value = n ;
        
        if(n > 0){  //  for sparse matrix 
            currentb = 1 ;
        }


        for(int i=0;i<=a[0].col;i++){
            for(int j=1;j<=n;j++){
                if(a[j].col == i){
                    b[currentb].row = a[j].col ;
                    b[currentb].col = a[j].row ;
                    b[currentb].value = a[j].value ;
                    currentb++ ;
                }
            }
        }

    
}
   
        
    
