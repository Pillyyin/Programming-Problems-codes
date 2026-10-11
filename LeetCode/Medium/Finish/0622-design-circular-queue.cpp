//  Runtime 0ms(100%), Memory 23.63MB(8.20%)
class MyCircularQueue {
public:
    vector<int> q ;
    int head, tail, count, capicity ;

    MyCircularQueue(int k) {
        q.resize(k) ;
        head = 0, tail = 0, count = 0, capicity = k ;
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false ;
        }
        q[tail] = value ;
        tail = (tail + 1) % capicity ;  // went back to 0
        count ++ ;
        return true ;
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false ;
        }
        head = (head + 1) % capicity ;
        count -- ;
        return true ;
    }
    
    int Front() {
        if(isEmpty()){
            return -1 ;
        }else{
            return q[head] ;
        }
    }
    
    int Rear() {
        if(isEmpty()){
            return -1 ;
        }else{
            return q[(tail - 1 + capicity) % capicity] ;  //  prevent < 0
        }
    }
    
    bool isEmpty() {
        return count == 0 ;
    }
    
    bool isFull() {
        return count == capicity ;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */