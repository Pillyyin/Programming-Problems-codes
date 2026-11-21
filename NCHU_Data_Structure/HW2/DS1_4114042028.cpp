//  1. Robot Assembly Sequence
# include <bits/stdc++.h>
using namespace std;

int push_times, pop_times ;
string source, target ;
struct Node{
    char val ;
    Node *next ;
};

struct Stack{
    Node *top ;
};

void push_Stack(Stack* st, char c){
    Node* p = new Node ;
    p->val = c ;
    p->next = st->top ;
    st->top = p ;
}

char pop_Stack(Stack* st){
    char val ;
    Node* tmp = st->top ;
    val = st->top->val ;
    st->top = st->top->next ;
    delete tmp ;
    return val ;
}

void dfs(int push_times, int pop_times, Stack* st, string& record){
    if(pop_times == (int)source.size()){
        for(int i=0;i<(int)record.size();i++){
            if(i > 0) cout << " " ;     
            cout << record[i] ;
        }
        cout << "\n" ;
        return ;
    }

    if(push_times < (int)source.size()){
        push_Stack(st, source[push_times]) ;
        record.push_back('i') ;
        dfs(push_times + 1, pop_times, st, record) ;
        pop_Stack(st) ;     //  restore
        record.pop_back() ; //  restore
    }

    if(st->top != nullptr && st->top->val == target[pop_times]){
        char tmp = st->top->val ;
        pop_Stack(st) ;
        record.push_back('o') ;
        dfs(push_times, pop_times + 1, st, record) ;
        push_Stack(st, tmp) ;   //  restore
        record.pop_back() ;     //  restore
    }
}

//  check source and target
bool same_letters(const string& a, const string& b){
    int cnt[26] = {0} ;
    for(int i=0;i<(int)a.size();i++) cnt[a[i] - 'a']++ ;
    for(int i=0;i<(int)b.size();i++) cnt[b[i] - 'a']-- ;
    for(int i=0;i<26;i++){
        if(cnt[i] != 0) return false ;
    }
    return true ;
}

int main() {
    freopen("testcase1.txt", "r", stdin);   
    freopen("output1.txt", "w", stdout); 
    Stack st ;
    string record = "" ;
    while(cin >> source){
        cin >> target ;

        push_times = 0 ;
        pop_times = 0 ;
        st.top =  nullptr ;
        
        cout << '[' << "\n" ;
        if((int)source.size() != (int)target.size()){
            cout << ']' << "\n" ;
        }else if(!same_letters(source, target)){    //  letters (and their counts) differ => impossible
            cout << ']' << "\n" ;
        }else{
            dfs(push_times, pop_times, &st, record) ;
            cout << ']' << "\n" ;
        }
        
    }
    
    return 0 ;
}