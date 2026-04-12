#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, s, n;
    cin >> t >> s >> n;

    vector<int> flip;
    for(int i = 0; i < n; i++){
        int order;
        cin >> order;
        flip.push_back(order);
    }

    // 一開始沙子全在下面
    int upper = 0;
    int lower = s;

    for(int j = 0; j < n; j++){
        // 計算這次翻轉前，沙子流了多少時間
        int elapsed;
        if(j == 0){
            elapsed = flip[0]; // 從時間0到第一次翻轉
        } else {
            elapsed = flip[j] - flip[j-1];
        }

        // 沙子從upper流向lower
        int flowed = min(upper, elapsed);
        upper -= flowed;
        lower += flowed;

        // 翻轉：上下對調
        swap(upper, lower);
    }

    // 最後一次翻轉後，upper的沙子繼續流
    // 沙漏跑完的絕對時間 = 最後翻轉時間 + 剩餘upper的沙子數
    int finish_time = flip.back() + upper;

    // 從時間t還需要等多久
    int answer = max(0, finish_time - t);
    cout << answer << "\n";

    return 0;
}
