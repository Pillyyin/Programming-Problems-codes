#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;

    while(T--){
        int Ncs, Neco ;
        cin >> Ncs >> Neco ; 

        long long IQcs[Ncs], IQeco[Neco] ;
        for(int i = 0; i < Ncs; i++){
            cin >> IQcs[i] ;
        } 
        for(int i = 0; i < Neco; i++){
            cin >> IQeco[i] ;
        }

        double sumcs = 0, sumeco = 0;
        for(int i = 0; i < Ncs; i++){
            sumcs += IQcs[i] ;
        }
        for(int i = 0; i < Neco; i++){
            sumeco += IQeco[i] ;
        }

        double avgcs  = sumcs  / Ncs;
        double avgeco = sumeco / Neco;

        int count = 0;
        for(int i = 0; i < Ncs; i++){
            if(IQcs[i] > avgeco && IQcs[i] < avgcs){
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}