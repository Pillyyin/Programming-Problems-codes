/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */


 // Runtime 1ms(79.70%), Memory 17.97MB(99.25%)
 
 // Insert a node into the heap
void pushHeap(ListNode* heap[], int *size, ListNode* x){
    int i = (*size)++;
        heap[i] = x;
    while(i > 0){
        int p = (i - 1) / 2;
        if(heap[p]->val <= heap[i]->val) break;
        ListNode* tmp = heap[p]; heap[p] = heap[i]; heap[i] = tmp;
        i = p;
    }
}

// Remove and return the smallest node
ListNode* popHeap(ListNode* heap[], int *size){
    ListNode* top = heap[0];
    heap[0] = heap[--(*size)];
    int i = 0;
    while(1){
        int l = 2*i + 1, r = 2*i + 2, min = i;
        if(l < *size && heap[l]->val < heap[min]->val) min = l;
        if(r < *size && heap[r]->val < heap[min]->val) min = r;
        if(min == i) break;
        ListNode* tmp = heap[i]; heap[i] = heap[min]; heap[min] = tmp;
        i = min;
    }
    return top;
}

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* heap[10001] ;
        int size = 0 ;

        ListNode dummy(0) ;
        ListNode* current = &dummy ;

        for(int i=0;i<lists.size();i++){
            if(lists[i] != nullptr){
                pushHeap(heap, &size, lists[i]) ;
            }
        }

        while(size > 0){
            ListNode* small = popHeap(heap, &size) ;
            current->next = small ;
            current = current->next ;
            if(small->next != nullptr){
                pushHeap(heap, &size, small->next) ;
            }
        }

        return dummy.next ;
    }
};