# include <bits/stdc++.h>
using namespace std ;

struct Node{
    int order, num ;
    struct Node *next, *prev ; 
};

struct LinkedList{
    struct Node *head ;
};

void insert_DBLL(LinkedList* DBLL, int n, int order){
    Node* p = new Node ;
    p->num = n ;
    p->order = order ;

    if(DBLL->head == nullptr){  //  insert first Node
        DBLL->head = p ;
        p->next = p ;
        p->prev = p ;
    }else{                      //  others
        p->next = DBLL->head ;
        p->prev = DBLL->head->prev ;
        DBLL->head->prev->next = p ;
        DBLL->head->prev =  p ;
    }

}

int delete_DBLL(LinkedList* DBLL, Node* del){
    int order = del->order ;
    if(del->next == del){   // only one Node
        DBLL->head = nullptr ;
        delete del ;
        return order ;
    }
    if(del == DBLL->head){  //  delete head
        DBLL->head = del->next ;
    }

    del->prev->next = del->next ;
    del->next->prev = del->prev ;
    delete del ;
    return order ;
}

int main() {
    int T, m, n ;
    LinkedList DBLL ;
    cin >> T ;
    while(T){
        cin >> m ;
        DBLL.head = nullptr ;

        for(int i=1;i<m+1;i++){  // i equals order 
            cin >> n ;
            insert_DBLL(&DBLL, n, i) ;
        }

        Node* p = DBLL.head ;
        int memory = -1, count_loop = 0, k = 0 ;
        string pos ;
        while(count_loop < m+1 && DBLL.head != nullptr){
            Node* tmp = p->next ;
            if(memory != -1 && gcd(p->num, memory) == 1){
                pos += to_string(p->order) ;
                pos += " " ;
                delete_DBLL(&DBLL, p) ;
                k++ ;
                count_loop = 0 ;    //  recount
                m-- ;
                memory = -1 ;       //  reset memory 
            }else{
                memory = p->num ;
                count_loop++ ;
            }
            p = tmp ;
        }
        cout << k << " " << pos << "\n" ;
        T-- ;
    }

    return 0 ;
}