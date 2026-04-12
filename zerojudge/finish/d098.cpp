/*
stringstream 練習
重點：將檔案裡所有不含非數字的單字找出，加起來就是加密金鑰
AC (1ms, 320KB)
*/

# include <bits/stdc++.h>
using namespace std;
int main() {
    string line ;

    while(getline(cin, line)){
        stringstream ss(line) ;
        string word ;
        int total = 0 ;

        while(ss >> word){
            stringstream tmp(word) ;
            int num ;
            tmp >> num ;
            if(!tmp.fail() && tmp.eof()){  //是純數字才加
                total += num ;
            }
        }

        cout << total << "\n" ;
         
    }
    
    return 0 ;
}