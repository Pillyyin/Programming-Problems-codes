#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, layer = 0;
    cin >> n >> k;
    
    while(layer != n){
        for(int row = 0; row < k; row++){   // ¨C¼h­«½Æ¦L k ¦æ
            if(layer % 2 == 0){
                for(int i = 0; i < n; i++){
                    if(i % 2 == 0){
                        for(int p = 0; p < k; p++) cout << "*";
                    }else{
                        for(int q = 0; q < k; q++) cout << " ";
                    }
                }
            }else{
                for(int j = 0; j < n; j++){
                    if(j % 2 == 0){
                        for(int m = 0; m < k; m++) cout << " ";
                    }else{
                        for(int x = 0; x < k; x++) cout << "*";
                    }
                }
            }
            cout << "\n";
        }
        layer++;
    }
    return 0;
}