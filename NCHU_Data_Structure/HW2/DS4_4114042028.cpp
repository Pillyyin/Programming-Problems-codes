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
        p->pre = nullptr ;
    }else{
        q->rear->next = p ;
        p->pre = q->rear ;
        q->rear = p ;
    }
    p->next = nullptr ;
}

pair<int, int> dequeue_front(Queue* q){
    if(q->rear == nullptr){   //  queue is empty
        return {-1, -1} ;
    }

    Node* tmp = q->front ;
    int energy = tmp->val ;
    int number = tmp->num ;
    q->front = q->front->next ;
    if(q->front == nullptr){
        q->rear = nullptr ;
    }else{
        q->front->pre = nullptr ;
    }
    delete(tmp) ;
    return {energy, number} ;
}

pair<int, int> dequeue_rear(Queue* q){
    if(q->rear == nullptr){   //  queue is empty
        return {-1, -1} ;
    }

    Node* tmp = q->rear ;
    int energy = tmp->val ;
    int number = tmp->num ;
    q->rear = q->rear->pre ;
    if(q->rear == nullptr){
        q->front = nullptr ;
    }else{
        q->rear->next = nullptr ;
    }
    delete(tmp) ;
    return {energy, number} ;
}

Node* PK_Strongest(Queue* q1, Queue* q2){
    Node* strongest ;

    if(q2->front == nullptr){
        strongest = q1->front ;
    }else if(q1->front == nullptr){
        strongest = q2->front ;
    }else{
        if(q1->front->val > q2->front->val){
            strongest = q1->front ;
        }else if(q1->front->val == q2->front->val && q1->front->num > q2->front->num){
            strongest = q1->front ;
        }else{
            strongest = q2->front ;
        }
    }

    return strongest ;

}

Node* PK_Weakest(Queue* q1, Queue* q2){
    Node* weakest ;

    if(q2->front == nullptr){
        weakest = q1->rear ;
    }else if(q1->front == nullptr){
        weakest = q2->rear ;
    }else{
        if(q1->rear->val < q2->rear->val){
            weakest = q1->rear ;
        }else if(q1->rear->val == q2->rear->val && q1->rear->num < q2->rear->num){
            weakest = q1->rear ;
        }else{
            weakest = q2->rear ;
        }
    }

    return weakest ;

}

int actions(int count, Queue* q1, Queue* q2){     //  Eliminate or Stop
    if(count == 1){
        return count ;
    }

    Node* s, * w ;
    int energy, num ;
    s = PK_Strongest(q1, q2) ;
    w = PK_Weakest(q1, q2) ;
    energy = s->val - w->val  ;
    num = s->num ;
    
    if(s == q1->front){
        dequeue_front(q1) ;
    }else{
        dequeue_front(q2) ;
    }

    if(w == q1->rear){
        dequeue_rear(q1) ;
    }else{
        dequeue_rear(q2) ;
    }

    Node* w2 = PK_Weakest(q1, q2) ;
    if(energy > w2->val){
        enqueue(energy, num, q2) ;
    }else if(energy == w2->val && num > w2->num){
        enqueue(energy, num, q2) ;
    }else{  //  STOP
        return count ;
    }

     count-- ;

     actions(count, q1, q2) ;''
}


int main() {
    freopen("testcase4.txt", "r", stdin) ;
    freopen("output4.txt", "w", stdout) ;
    cin >> T ;
    while(T--){
        cin >> n ;

        memset(s, 0, sizeof(s)) ;
        for(int i=0;i<n;i++){
            cin >> s[i] ;
        }

        Queue q1, q2 ;  //  q1 save 
        q1.front = nullptr ;
        q1.rear = nullptr ;
        q2.front = nullptr ;
        q2.rear = nullptr ;

        for(int i=n-1;i>=0;i--){
            enqueue(s[i], i, &q1) ;
        }

        actions(n, &q1, &q2) ;

        delete(q1) ;
        delete(q2) ;
    }
}