//  3. Minimum Bus Transfers
#include <bits/stdc++.h>
using namespace std ;

int T, N, R, A, B ; 
int count_route[10001], route_list[10001][101], adj[101][101], trans[101], last_route[101] ;

struct Node{
    struct Node* next ;
    int val ; // val == route
};

struct Queue{
    int prev ;
    Node *front, *rear ;
};

void enqueue(int x, Queue* q){
    Node* p = new Node ;
    p->val = x ;
    if(q->front == nullptr){    // queue is empty 
        q->front = p ;
        q->rear = p ;
    }else{
        q->rear->next = p ;
        q->rear = p ;
    }
    p->next = nullptr ;
}

int dequeue(Queue* q){
    if(q->front == nullptr){    // queue is empty 
        return -1 ;
    }
    Node* tmp = q->front ;
    int route = tmp->val ;
    q->front = q->front->next ;
    delete(tmp) ;
    if(q->front == nullptr) q->rear = nullptr ;    // after dequeue become empty
    return route ;
}

int BFS(int A, int B, Queue* q){
    
    if(A == B){
        return 0 ;
    }    

    for(int i=1;i<=count_route[A];i++){     //  start stop
        enqueue(route_list[A][i], q) ;
        trans[route_list[A][i]] = 0 ;
        last_route[route_list[A][i]] = 0 ;
    }

    while(q->front != nullptr){
        int cur = dequeue(q) ;
        for(int i=1;i<=count_route[B];i++){
            if(cur == route_list[B][i]){    //  find 
                return cur ;
            }
        }
        
        for(int j=1;j<=R;j++){
            if(adj[cur][j] == 1 && trans[j] == -1){
                trans[j] = trans[cur] + 1 ;
                last_route[j] = cur ;
                enqueue(j, q) ;
            }
        }

    }
        
    return -1 ;     //  queue empty == can't find
    
}

void clear(Queue* q){
    while(q->front != nullptr){
        Node* tmp = q->front ;
        q->front = q->front->next ; 
        delete(tmp) ;
    }
    q->rear = nullptr ;
}


int main(){
    freopen("testcase3.txt", "r", stdin);   
    freopen("output3.txt", "w", stdout); 
    cin >> T ;
    int id ;
    while(T--){
        cin >> N >> R ;    // bus stops, routes

        memset(count_route, 0, sizeof(count_route)) ;
        memset(route_list, 0, sizeof(route_list)) ;
        memset(adj, 0, sizeof(adj)) ;
        memset(trans, -1, sizeof(trans)) ;  // -1 == unvisited

        for(int i=1;i<R+1;i++){   //  i = route
            while(cin >> id){
                if(id == 0){
                    break ; 
                }
                count_route[id]++ ;
                route_list[id][count_route[id]] = i ;
            }
        }

        cin >> A >> B ;
            
        //  create adj
        for(int s=1;s<N+1;s++){     // s == stops number(id)
            for(int i=1;i<=count_route[s];i++){
                for(int j=i+1;j<=count_route[s];j++){
                    adj[route_list[s][i]][route_list[s][j]] = 1 ;
                    adj[route_list[s][j]][route_list[s][i]] = 1 ;
                }
            }
        }

        
        Queue q ;
        q.front = nullptr ;
        q.rear = nullptr ;
        

        int ans = BFS(A, B, &q) ;
        int ans_route[101] ;
        clear(&q) ;  //  reset queue 

        if(ans == 0){
            cout << 0 << "\n" ;
            cout << 0 << "\n" ;
        }else if(ans == -1){
            cout << -1 << "\n" ;
            cout << -1 << "\n" ;
        }else{
            cout << trans[ans] << "\n" ;
            int cur = ans ;
            int count = 0 ;
            while(cur != 0){
                ans_route[count] = cur ;
                cur = last_route[cur] ;
                count++ ;
            }

            for(int i=count-1;i>=0;i--){
                if(i == 0){
                    cout << ans_route[i] ;
                }else{
                    cout << ans_route[i] << " " ;
                }
            }
            cout << "\n" ;
        }

    }
}