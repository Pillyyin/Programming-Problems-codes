# include <bits/stdc++.h>
using namespace std;
int main() {
    int n ;
    cin >> n ;

    string color[n] ;
    for(int i=0;i<n;i++){
        cin >> color[i] ;
    }

    //setting target   
    string target1, target2 ;
    target1 = "pink" ;
    target2 = "rose" ;
    int tsize = target1.size() ;

    //轉小寫
    for(int i=0;i<n;i++){
       for(int j=0;j<color[i].size();j++){
            color[i][j] = tolower(color[i][j]) ;
       }
    }

    //判斷pink
    int count = 0 ; //找幾個
    for(int i=0;i<n;i++){
        int csize = color[i].size() ; //目前字串大小
        for(int j=0;j<csize;j++){
            int tstart = j ;
            if(color[i][j] == target1[tstart]){
                tstart++ ;
                if(tstart == tsize){ //找完就break
                    count++ ;
                    break ;
                }
            }else if(color[i][j] != target1[tstart]){ //錯一個就重製
                tstart = 0 ;
            }
        }
    }

    //判斷rose
    for(int i=0;i<n;i++){
        int csize = color[i].size() ; //目前字串大小
        for(int j=0;j<csize;j++){
            int tstart = j ;
            if(color[i][j] == target2[tstart]){
                tstart++ ;
                if(tstart == tsize){ //找完就break
                    count++ ;
                    break ;
                }
            }else if(color[i][j] != target2[tstart]){ //錯一個就重製
                tstart = 0 ;
            }
            
        }
    }

    //cout
    if(count == 0){
        cout << "I must watch Star Wars with my daughter" << "\n" ;
    }else{
        cout << count << "\n" ;
    }
    
    return 0 ;
}
