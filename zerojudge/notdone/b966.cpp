# include <bits/stdc++.h>
using namespace std;
int main() {
    int N ;
    cin >> N ;

    vector<pair<int,int>> line(N);

    for(int i=0;i<N;i++){
        cin >> line[i].first >> line[i].second ;
    }

    //用左端排
    sort(line.begin(),line.end()) ;

    int ans = 0 ;

    int curfront = line[0].first ;
    int curback = line[0].second ;

    for(int i=1;i<N;i++){
        int front = line[i].first ;
        int back = line[i].second ;

        if(front <= curback){   //重疊右端取大
            curback = max(curback , back) ;
        }else{  //沒重疊變新一段
            ans += (curback - curfront) ;
            curfront = front ;
            curback = back ;
        }
    }

    ans += (curback - curfront) ;

    cout << ans << "\n" ;

    return 0 ;
}