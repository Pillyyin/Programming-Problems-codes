# include <bits/stdc++.h>
using namespace std;
int main() {
    int N ;
    cin >> N ;

    bool day[366] = {false} ; //標記有食物的天數0~365(0不會用)

    for(int i=0;i<N;i++){
        int s, t ;
        cin >> s >> t ;

        for(int j=s;j<t+1;j++){
            day[j] = true ; //重複仍為true
        }
    }

    int food = 0 ;
    for(int k=1;k<366;k++){ //1~365
        if(day[k]){ //day[k]true 代表有食物所以food++
            food++ ;
        }
    }


    cout << food << "\n" ;

    return 0 ;
}
