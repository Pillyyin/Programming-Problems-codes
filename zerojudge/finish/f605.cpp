# include <bits/stdc++.h>
using namespace std;
int main() {
    int n, d, cost = 0, goods = 0 ; 

    cin >> n >> d ;
    
    for(int i=0;i<n;i++){   //块n兜坝珇
        int price[3] ;
        int total = 0 ; //传坝珇穝璸衡羆肂
        int maxvalue, minivalue ;

        for(int k=0;k<3;k++){   //块3基
            cin >> price[k] ; 
        }

        maxvalue = price[0] ; //盢材Ω基砞程蔼
        minivalue = price[0] ; //盢材Ω基砞程

        for(int j=0;j<3;j++){
            total += price[j] ; //魁场基羆
            if(price[j] >= maxvalue){ // update maximum
                maxvalue = price[j] ;
            }else if(price[j] <= minivalue){ // update minimum
                minivalue = price[j] ; 
            }
        }

        if(maxvalue - minivalue >= d ){ //单
            goods++ ;
            cost += total / 3 ; //total/3=avg
        }

    }

    cout << goods << " " << cost << "\n" ;

    return 0 ;
}