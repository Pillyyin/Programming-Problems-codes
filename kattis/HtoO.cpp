#include <bits/stdc++.h>
using namespace std;
int main() {
    string molecule1, molecule2;
    int n;
    cin >> molecule1 >> n;
    cin >> molecule2;

    char element[100];
    int count[100] = {0};
    char target[100];
    int tcount[100] = {0};
    string numstr = "";
    int idx = 0, curidx = -1;

    // molecule1
    for(int i = 0; i <= (int)molecule1.size(); i++){
        if(i == (int)molecule1.size() || (molecule1[i] >= 'A' && molecule1[i] <= 'Z')){
            if(curidx >= 0){
                count[curidx] += (numstr == "") ? 1 : stoi(numstr);
                numstr = "";
            }
            if(i == (int)molecule1.size()) break;

            bool found = false;
            for(int j = 0; j < idx; j++){
                if(element[j] == molecule1[i]){
                    curidx = j;
                    found = true;
                    break;
                }
            }
            if(!found){
                element[idx] = molecule1[i];
                curidx = idx;
                idx++;
            }
        } else {
            numstr += molecule1[i];
        }
    }

    // *n
    for(int i = 0; i < idx; i++) count[i] *= n;

    // molecule2
    int tidx = 0, tcuridx = -1;
    numstr = "";
    for(int i = 0; i <= (int)molecule2.size(); i++){
        if(i == (int)molecule2.size() || (molecule2[i] >= 'A' && molecule2[i] <= 'Z')){
            if(tcuridx >= 0){
                tcount[tcuridx] += (numstr == "") ? 1 : stoi(numstr);
                numstr = "";
            }
            if(i == (int)molecule2.size()) break;

            bool found = false;
            for(int j = 0; j < tidx; j++){
                if(target[j] == molecule2[i]){
                    tcuridx = j;
                    found = true;
                    break;
                }
            }
            if(!found){
                target[tidx] = molecule2[i];
                tcuridx = tidx;
                tidx++;
            }
        } else {
            numstr += molecule2[i];
        }
    }

    // 計算幾個
    int result = INT_MAX;
    for(int i = 0; i < tidx; i++){
        int available = 0;
        for(int j = 0; j < idx; j++){
            if(element[j] == target[i]){
                available = count[j];
                break;
            }
        }
        result = min(result, available / tcount[i]);
    }

    if(result == INT_MAX) result = 0;
    cout << result << "\n";
    return 0;
}
