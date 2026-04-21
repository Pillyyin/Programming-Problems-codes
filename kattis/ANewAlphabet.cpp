//AI
#include <bits/stdc++.h>
using namespace std;
int main() {
    string trans[26] = {
        "@",    // a
        "8",    // b
        "(",    // c
        "|)",   // d
        "3",    // e
        "#",    // f
        "6",    // g
        "[-]",  // h
        "|",    // i
        "_|",   // j
        "|<",   // k
        "1",    // l
        "[]\\/[]",  // m
        "[]\\[]",   // n
        "0",    // o
        "|D",   // p
        "(,)",  // q
        "|Z",   // r
        "$",    // s
        "']['" ,// t
        "|_|",  // u
        "\\/",  // v
        "\\/\\/",// w
        "}{",   // x
        "`/",   // y
        "2"     // z
    };

    string line;
    getline(cin, line);

    for(int i = 0; i < line.size(); i++){
        char c = line[i];
        if(c >= 'a' && c <= 'z'){
            cout << trans[c - 'a'];
        } else if(c >= 'A' && c <= 'Z'){
            cout << trans[c - 'A'];  // 大寫也使用同一個對照表
        } else {
            cout << c;  // 其他字元直接輸出
        }
    }
    cout << "\n";
    return 0;
}
