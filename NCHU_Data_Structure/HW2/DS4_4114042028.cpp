//  4. Strongest Cell
# include <bits/stdc++.h>
using namespace std;

int T, n, s[50000] ;

struct Node{
    Node *next, *pre ; 
    int val, num ;
};

struct Queue{
    Node *front, *rear ;
};

void enqueue(int energy, int num, Queue* q){
    Node* p = new Node ;
    p->val = energy ;
    p->num = num ;
    if(q->front == nullptr){    //  queue is empty
        q->front = p ;
        q->rear = p ;
    }else{
        q->rear->next = p ;
        q->rear = p ;
    }
    p->next = nullptr ;
}

int dequeue(Queue* q){
    if(q->rear == nullptr){   //  queue is empty
        return -1 ;
    }

    Node* p = new Node ;
    Node* tmp = q->front ;
    int energy = tmp->val ;
    int number = tmp->num ;
    q->front = q->front->next ;
    if(q->front == nullptr) q->rear = nullptr ;
    delete(tmp) ;
    pair<int, int> get_value(){
        return {energy, number} ;
    }
    
}

void actions(){     //  Eliminate or Stop
     
}


int main() {
    freopen("testcase4.txt", "r", stdin) ;
    freopen("output4.txt", "w", stdout) ;

    while(T--){
        cin >> n ;

        memset(s, 0, sizeof(s)) ;
        for(int i=0;i<n;i++){
            cin >> s[i] ;
        }

        Queue q1, q2 ;  //  q1 save 
        for(int i=n-1;i>=0;i--){
            enqueue(s[i], i, &q1) ;
        }


    }
}