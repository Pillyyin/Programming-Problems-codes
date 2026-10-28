//  Runtime 0ms(100%), Memory 9.86MB(99.79%)
class MyQueue {
public:

    stack<int> s1 ; //  instack
    stack<int> s2 ; //  outstack

    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x) ;
    }
    
    int pop() {
        //  transfer
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top()) ;
                s1.pop() ;
            }
        }

        int val ;
        val = s2.top() ;
        s2.pop() ;
        return val ;
    }
    
    int peek() {
        //  transfer
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top()) ;
                s1.pop() ;
            }
        }

        return s2.top() ;
    }
    
    bool empty() {
        return s1.empty() && s2.empty() ;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */