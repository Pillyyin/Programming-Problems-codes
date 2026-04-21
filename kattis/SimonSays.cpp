# include <bits/stdc++.h>
using namespace std;
int main() {
    int n ;
    cin >> n ;
    cin.ignore() ;

    string line, target ;
    target = "Simon says" ;
    
    
        for(int i=0;i<n;i++){
            getline(cin,line) ;
            bool match = false ;

            if(line.size()>=10){
                for(int j=0;j<10;j++){
                    if(line[j] == target[j]){
                        match = true ;
                    }else{
                        match = false ;
                        break ;
                    }
                }

                if(match){
                    for(int k=10;k<line.size();k++){
                        cout << line[k]  ;
                    }

                    cout << "\n" ;
                }
            }

            
    }
    



    return 0 ;
}
