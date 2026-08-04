#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int first, last;
        int total = 0;
        cin >> first >> last;
        for (int j = first; j < last; j++) {
            double a = sqrt(j);
            if(a == (int)a) { 
                total += j;
            }
        }
        cout << "Case " << i + 1 << ": " << total << endl;
    }
}
