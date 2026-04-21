#include <bits/stdc++.h>
using namespace std;
int main() {
    string line, words[100];
    int count = 0;
    getline(cin, line);

    string word = "";
    for(int i = 0; i <= line.size(); i++){
        if(line[i] == ' ' || i == line.size()){  // 遇到空格或結尾
            if(word != ""){                        // word 不是空的才存
                words[count++] = word;
                word = "";                         // reset
            }
        } else {
            word += line[i];                       // 累加字元
        }
    }

    sort(words, words + count);                    

    bool found = false;
    for(int i = 0; i < count-1; i++){
        if(words[i] == words[i+1]){
            found = true;
            break;
        }
    }

    if(found){
        cout << "no" << "\n" ;
    }else{
        cout << "yes" << "\n" ;
    }
    
    return 0;
}
