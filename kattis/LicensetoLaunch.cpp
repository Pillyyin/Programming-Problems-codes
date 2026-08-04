# include <bits/stdc++.h>
using namespace std;
int main() {
    int n, junk, launchday=0, minijunk=1000000000 ;
    cin >> n ;
    for(int i=0;i<n;i++){ //cin junk
        cin >> junk ;
        if(junk < minijunk){
            minijunk = junk ; //重製最少垃圾為該天垃圾
            launchday = i ; //發射日距離幾天
        }
    }
    cout << launchday << "\n" ;
  
    return 0 ;
}
