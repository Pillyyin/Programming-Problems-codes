/*

# include <bits/stdc++.h>
using namespace std;
int main() {
    char first ;
    cin >> first ;

    string N[13], S[13], W[13], E[13] ;
    string deck ;
    while(cin >> deck){
        if(deck == "#"){
            break ;
        }

        if(first == 'N'){
            for(int i=0;i<103;i+=2){    //0~103, 眖0Ωㄢ102(程琌102103)
               if(i%8 == 0){
                    E[i] = deck[i]+deck[i+1] ;
                }else if(i%8 == 2){
                    S[i] = deck[i]+deck[i+1] ;
                }else if(i%8 == 4){
                    W[i] = deck[i]+deck[i+1] ;
                }else if(i%8 == 6){
                    N[i] = deck[i]+deck[i+1] ;
                }   
            }
        }
        if(first == 'E'){
            for(int i=0;i<103;i+=2){    //0~103, 眖0Ωㄢ102(程琌102103)
               if(i%8 == 0){
                    S[i] = deck[i]+deck[i+1] ;
                }else if(i%8 == 2){
                    W[i] = deck[i]+deck[i+1] ;
                }else if(i%8 == 4){
                    N[i] = deck[i]+deck[i+1] ;
                }else if(i%8 == 6){
                    E[i] = deck[i]+deck[i+1] ;
                }   
            }
        }
        if(first == 'S'){
            for(int i=0;i<103;i+=2){    //0~103, 眖0Ωㄢ102(程琌102103)
               if(i%8 == 0){
                    W[i] = deck[i]+deck[i+1] ;
                }else if(i%8 == 2){
                    N[i] = deck[i]+deck[i+1] ;
                }else if(i%8 == 4){
                    E[i] = deck[i]+deck[i+1] ;
                }else if(i%8 == 6){
                    S[i] = deck[i]+deck[i+1] ;
                }   
            }
        }
        if(first == 'W'){
            for(int i=0;i<103;i+=2){    //0~103, 眖0Ωㄢ102(程琌102103)
               if(i%8 == 0){
                    N[i] = deck[i]+deck[i+1] ;
                }else if(i%8 == 2){
                    E[i] = deck[i]+deck[i+1] ;
                }else if(i%8 == 4){
                    S[i] = deck[i]+deck[i+1] ;
                }else if(i%8 == 6){
                    W[i] = deck[i]+deck[i+1] ;
                }   
            }
        }

        sort(N+0,N+13);
        sort(E+0,N+13);
        sort(S+0,N+13);
        sort(W+0,N+13);

        for(int i=0;i<13;i++){
            cout << "S: " << S[i] << " " ;
        }
        cout << "\n" ;
        for(int i=0;i<13;i++){
            cout << "W: " << W[i] << " " ;
        }
        cout << "\n" ;
        for(int i=0;i<13;i++){
            cout << "N: " << N[i] << " " ;
        }
        cout << "\n" ;
        for(int i=0;i<13;i++){
            cout << "E: " << E[i] << " " ;
        }
        cout << "\n" ;
    }


    return 0 ;
}

*/
//claude code
#include <bits/stdc++.h>
using namespace std;

string suitOrder = "CDSH";
string rankOrder = "23456789TJQKA";

bool cmp(string a, string b){
    int sa = suitOrder.find(a[0]);
    int sb = suitOrder.find(b[0]);
    if(sa != sb) return sa < sb;
    return rankOrder.find(a[1]) < rankOrder.find(b[1]);
}

int main() {
    char first;
    while(cin >> first && first != '#'){
        string deck1, deck2;
        cin >> deck1 >> deck2;
        string deck = deck1 + deck2;  // 104じ52眎礟

        vector<string> N, E, S, W;
        
        string order[4];
        if(first == 'N'){ order[0]="E"; order[1]="S"; order[2]="W"; order[3]="N"; }
        if(first == 'E'){ order[0]="S"; order[1]="W"; order[2]="N"; order[3]="E"; }
        if(first == 'S'){ order[0]="W"; order[1]="N"; order[2]="E"; order[3]="S"; }
        if(first == 'W'){ order[0]="N"; order[1]="E"; order[2]="S"; order[3]="W"; }

        map<string, vector<string>> hands;

        for(int i = 0; i < 52; i++){
            string card = "";
            card += deck[i*2];
            card += deck[i*2+1];
            hands[order[i%4]].push_back(card);
        }

        sort(hands["N"].begin(), hands["N"].end(), cmp);
        sort(hands["E"].begin(), hands["E"].end(), cmp);
        sort(hands["S"].begin(), hands["S"].end(), cmp);
        sort(hands["W"].begin(), hands["W"].end(), cmp);

        cout << "S:";
        for(auto c : hands["S"]) cout << " " << c;
        cout << "\n";
        cout << "W:";
        for(auto c : hands["W"]) cout << " " << c;
        cout << "\n";
        cout << "N:";
        for(auto c : hands["N"]) cout << " " << c;
        cout << "\n";
        cout << "E:";
        for(auto c : hands["E"]) cout << " " << c;
        cout << "\n";
    }
    return 0;
}
