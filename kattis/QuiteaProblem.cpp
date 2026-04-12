# include <bits/stdc++.h>
using namespace std;
int main() {
    string line, target ;
    target = "problem" ; //用小寫判斷
    
    while(getline(cin,line)){

        int sizeline = line.size() ;
        int sizetarget = target.size() ;
        bool found = false;
        for(int i=0;i<sizeline;i++){ //全轉小寫
            line[i] = tolower(line[i]); 
        }

        for(int i=0;i<=sizeline-sizetarget;i++){
           bool match = true;
            for(int j = 0; j < sizetarget; j++){
                if(line[i+j] != target[j]){
                    match = false;
                    break;
                }
            }
            if(match){
                found = true;
                break;
            }
        }
         cout << (found ? "yes" : "no") << "\n";
    }
        
    return 0 ;
}