//  3. Minimum Bus Transfers
#include <bits/stdc++.h>
using namespace std ;

int T, N, R, A, B ; 
int count_route[10001], route_list[10001][101], adj[101][101] ;

struct Node{
    struct Node* next ;
    int route ;
};

struct Queue{
    int prev ;
    Node *front, *rear ;
};


int main(){
    freopen("testcase3.txt", "r", stdin);   
    freopen("output3.txt", "w", stdout); 
    cin >> T ;
    int id ;
    while(T--){
        cin >> N >> R ; // bus stops, routes
        memset(count_route, 0, sizeof(count_route)) ;
        memset(route_list, 0, sizeof(route_list)) ;

        for(int i = 1 ; i < R + 1 ; i++){   //  i = route
            
            while(cin >> id){
                if(id == 0){
                    break ; 
                }
                count_route[id]++ ;
                route_list[id][count_route[id]] = i ;
            }
            
            cin >> A >> B ;
            
            


        }
    }
}