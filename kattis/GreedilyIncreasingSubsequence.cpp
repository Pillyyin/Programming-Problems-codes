# include <bits/stdc++.h>
using namespace std;
int main() {
    int N, tmp=0, count=1 ;
    cin >> N ;
    int g[N] ;
    for(int i=0;i<N;i++){
        cin >> g[i] ;
    }
    
    vector<int> gis ;
    gis.push_back(g[0]) ; // 第一項一定要輸出
    for(int j=0;j<N;j++){
        if(g[j]>gis.back()){
            gis.push_back(g[j]) ; 
        }
    }
    
    cout << gis.size() << "\n" ;
    for(int k=0;k<gis.size();k++){
        cout << gis[k] << " " ;
    }
    return 0 ;
}
