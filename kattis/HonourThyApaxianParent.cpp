# include <bits/stdc++.h>
using namespace std;
int main() {
    string Y, P ;
    cin >> Y >> P ;

    int sizeofa = Y.size();
    char last = Y.back() ;
    if(last == 'e'){
    cout << Y + "x" + P << "\n";
    }else if(last == 'a' || last == 'i' || last == 'o' || last == 'u'){
        Y.pop_back();  // 刪除最後一個字元
        cout << Y + "ex" + P << "\n";
    }else if(Y.size() >= 2 && Y[Y.size()-2] == 'e' && Y[Y.size()-1] == 'x'){
        cout << Y + P << "\n";
    }else{
        cout << Y + "ex" + P << "\n";  
    }
        



    return 0 ;
}
