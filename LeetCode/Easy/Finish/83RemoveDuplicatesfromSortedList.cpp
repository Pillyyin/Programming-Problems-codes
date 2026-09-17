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

//  Runtime 0ms(100%), Memory 16.22MB(34.73%)

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == nullptr) return nullptr ;

        ListNode* cur = head ;

        while(cur->next != nullptr){
            if(cur->val == cur->next->val){
                cur->next = cur->next->next ;
            }else{
                cur = cur->next ;
            }

        }
        
        return head ;
    }
};