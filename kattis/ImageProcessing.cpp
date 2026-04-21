# include <bits/stdc++.h>
using namespace std;
int main() {
    int H, W, N, M ;
    cin >> H >> W >> N >> M ;

    int image[H][W] ;
    int kernel[N][M] ;
    int convoluted [H-N+1][W-M+1] ;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin >> image[i][j] ;
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> kernel[i][j] ;
        }
    }

    //claude
    for(int i = 0; i < H-N+1; i++){
        for(int j = 0; j < W-M+1; j++){
            convoluted[i][j] = 0;  // 先歸零
            for(int k = 0; k < N; k++){
                for(int l = 0; l < M; l++){
                    // kernel 翻轉：用 N-1-k 和 M-1-l
                    convoluted[i][j] += image[i+k][j+l] * kernel[N-1-k][M-1-l];
                }
            }
        }
    }

    
    for(int i = 0; i < H-N+1; i++){
        for(int j = 0; j < W-M+1; j++){
            cout << convoluted[i][j];
            if(j < W-M) cout << " ";
        }
        cout << "\n";
    }



    return 0 ;
}
