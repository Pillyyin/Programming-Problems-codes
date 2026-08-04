# include <bits/stdc++.h>
using namespace std;
int main() {
    int A[] = {-3, 6, 5, -1, 0, 9, 3}; //
    int i, j, tmp ;
    int n = sizeof(A)/sizeof(int); //28bytes/4bytes(一個字) =7
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){ //
            if(A[j]>A[j+1]){
                tmp=A[j];
                A[j]=A[j+1];
                A[j+1]=tmp;
            }
        }
    }
    for(i=0;i<n;i++){
        cout << A[i] << " ";
    }
 /* 順一次
i=0 j=0   -3 6 5 -1 0 9 3
i=0 j=1   -3 5 6 -1 0 9 3
i=0 j=2   -3 5 -1 6 0 9 3
i=0 j=3   -3 5 -1 0 6 9 3
i=0 j=4   -3 5 -1 0 6 9 3
i=0 j=5   -3 5 -1 0 6 3 9
 */   
}