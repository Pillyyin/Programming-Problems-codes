//ASCII 轉換
#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    string word;
    cin >> T >> word;
    string ans = "";

    for(int i = 0; i < word.size(); i++){  // ? 用 word.size() 不是 T
        if(word[i] >= 'A' && word[i] <= 'Z'){
            ans += (char)tolower(word[i]);
        } else if(word[i] >= 'a' && word[i] <= 'z'){
            ans += (char)toupper(word[i]);
        }
    }

    cout << ans << "\n";
    return 0;
}


