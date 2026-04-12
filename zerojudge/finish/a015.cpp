//注意有多組測資
# include <bits/stdc++.h>
using namespace std;
int main() {
    int row, column ;
    while(cin >> row >> column){
        int array[row][column] ;
        for(int i=0;i<row;i++){ 
            for(int j=0;j<column;j++){ 
                cin >> array[i][j] ;
            }
        }

        //翻轉(行列互換)
        int newarray[column][row];
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                newarray[j][i] = array[i][j] ;
            }
        }

        for(int i=0;i<column;i++){
            for(int j=0;j<row;j++){
                cout << newarray[i][j] << " ";
            }
            cout << "\n" ;
        }
    }

    


    return 0 ;
}