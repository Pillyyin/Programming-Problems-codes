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


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr) return nullptr ;

        ListNode* cur = head ;
        ListNode* skip ;
        int dup ;

        while(cur->next != nullptr){
            //  skip duplicates 
            if( cur->next->next !=nullptr && cur->next->val == cur->next->next->val){
                dup = cur->next->val ;
                skip = cur->next ;

                while( skip != nullptr &&skip->val == dup){
                    skip = skip->next ;
                }

                cur->next = skip;
            }else{
                cur = cur->next ;
            }
        }
        return head ;

    }
};