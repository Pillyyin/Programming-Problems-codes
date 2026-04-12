# include <bits/stdc++.h>
using namespace std;
int main() {
    int correct , score ;
    cin >> correct ;
    if(correct < 11){
        score = correct * 6 ;
    }else if(correct > 10 && correct<21){
        score = 60+(correct-10)*2 ;
    }else if(correct > 20 && correct<41){
        score = 80+(correct-20) ;
    }else{
        score = 100 ;
    }
    cout << score ;
}