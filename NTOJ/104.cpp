#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int mid = N - 1;  // 星星中心位置
    int maxwidth = 2*N - 1;

    for(int i = 0; i < N; i++){ //層數
        for(int j = 0; j < maxwidth; j++){
            if(j >= mid - i && j <= mid + i){  // 範圍判斷
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
