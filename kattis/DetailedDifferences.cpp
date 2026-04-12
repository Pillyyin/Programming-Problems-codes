# include <bits/stdc++.h>
using namespace std;
int main() {
    int n ;
    cin >> n ;

    for(int i=0;i<n;i++){
        string A, B ;
        cin >> A >> B ;

        bool diff[A.size()]  ;

        for(int j=0;j<A.size();j++){    //全部設為true
            diff[j] = true ;
        }

        for(int j=0;j<A.size();j++){    //不同標記false
            if(A[j] != B[j]){
                diff[j] = false ;
            }
        }

        cout << A << "\n" << B << "\n" ;
        for(int k=0;k<A.size();k++){
            if(diff[k]){
                cout << "." ;
            }else{
                cout << "*" ;
            }
        }
        cout << "\n\n" ;
    
    }

    return 0 ;
}