#include <bits/stdc++.h>
using namespace std;
int main() {
    int n ;
    cin >> n ;
    string bracket ;
    cin >> bracket ;

    stack<char> st ;
    bool valid = true ;

    for(int i = 0; i < n; i++){
        char c = bracket[i] ;
        if(c == '(' || c == '[' || c == '{'){
            st.push(c);  // 左括號
        }else{
            if(st.empty()){  // 沒有左括號
                valid = false ;
                break ;
            }
            char top = st.top();
            st.pop();
            if(c == ')' && top != '('){
                valid = false ; 
                break ; 
            }
            if(c == ']' && top != '['){
                valid = false ;
                break ;
            }
            if(c == '}' && top != '{'){
                valid = false ;
                break ;
            }
        }
    }

    if(!st.empty()){
        valid = false ;  // 還有左括號沒配對
    } 

    if(valid){
        cout << "Valid" << "\n" ;
    }else{
        cout << "Invalid" << "\n" ;
    }

    return 0;
}