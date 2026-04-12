/*# include <bits/stdc++.h> TLE¤Ó½ÆÂø

using namespace std;
int main() {
    int x0, x1, x2, x3, tem=0, count=0, i, n ;
    vector<int> arr ;
    cin >> x0 >> x1 >> x2 >> x3 ;
    for(i=x0;i<(x1+1);i++){
        arr.push_back(i) ;
        tem++ ;
    }
    for(n=x2;n<(x3+1);n++){
        arr.push_back(n) ;
        tem++ ;
    }
    sort(arr.begin() , arr.end());

      
    for(count=0;count<tem;count++){
        cout << arr[count] ;
      

    for(count=0;count<tem-2;count++){
        if(arr[count] == arr[count+1]){
            cout << "yes" ;
            break ;
        }else if(count == tem-1){
            cout << "no" ;
        }
    }
    
    return 0 ;
}
*/
//max min algorithm
# include <bits/stdc++.h>
using namespace std;
int main() {
    int x0, x1, x2, x3 ;
    cin >> x0 >> x1 >> x2 >> x3 ;
    if(max(x0, x2) == min(x1, x3) || max(x0, x2) < min(x1, x3)){
        cout << "yes" ;
    }else{
        cout << "no" ;
    }

    return 0 ;
}