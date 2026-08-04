// cinema 先把全部讀完再輸出 input       e.g. input N = 10, M = 5
// cinema2 這裡可以直接用 break         groups = 3 4 5 2 1
# include <bits/stdc++.h>
using namespace std;

int i; // 放在外面是為了讓 main 結束前能存取最後一圈的 i 值

int main() {
    int N, M, group=0, tmp=0; // N=座位數, M=團體數
    cin >> N >> M;
    
    for(i=0; i<M; i++){
        cin >> group;
        tmp += group;    // tmp 為目前累積的總人數
        if(tmp > N){     // tmp 超過座位數就 break
            break;
        }
    } 
    
    // M 是總團體數，i 是成功進場的團體數
    cout << M - i << "\n";
    
    return 0;
}