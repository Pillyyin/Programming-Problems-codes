//	AC (1ms, 324KB)
# include <bits/stdc++.h>
using namespace std;
int main() {
    int num ;
    cin >> num ;

    for(int i=2;i<=num;i++){    //從2開始往上找
        int power = 0 ;
        while(num%i == 0){  //同一因數重複找
            num /= i ;
            power ++ ;
        }

        if(power == 1){
            cout << i ;

            if(num != 1){   //不是最後一項要印*
                cout << " * " ;
            }

        }else if(power != 0){
            cout << i << "^" << power ;

            if(num != 1){   //不是最後一項要印*
                cout << " * " ;
            }
        }

    }

    return 0 ;        
        
}  
