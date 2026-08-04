/*
sort 應用
sort完再找單獨的
*/
# include <bits/stdc++.h>
using namespace std;
int main() {
    int N ;
    cin >> N ;

    int count = 1 ;
    for(int j=0;j<N;j++){

        int G ;
        cin >> G ;

        int num[G] ;
        for(int i=0;i<G;i++){
            cin >> num[i] ;
        }

        sort(num+0, num+G) ;

        int alone = 0 ;
        for(int i=0;i<G-1;i++){
            if(num[i] == num[i+1]){
                i++ ;
            }else if(num[i] != num[i+1]){
                alone = num[i] ;
            }
        }

        if(alone == 0 ){
                alone = num[G-1] ;
            }

        cout << "Case #" << count  << ": " << alone << "\n" ;
        count ++ ;
    }
        

    return 0 ;
}
