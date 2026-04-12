/* Bubble sort */
# include <bits/stdc++.h>
using namespace std;
int main() {
    int N ;
    while(cin >> N){
        vector<int> num(N) ;
        
        for(int i=0;i<N;i++){
            cin >> num[i] ;
        }

        int count = 0 ;
        for(int i=0;i<N-1;i++){
            for(int j=i+1;j<N;j++){
                if(num[i] > num[j]){
                    count ++ ;
                }
            }
        }
        cout << "Minimum exchange operations : " << count << "\n" ;
    }

    return 0 ;
}

