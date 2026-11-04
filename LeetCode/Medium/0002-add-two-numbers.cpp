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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy ;
        ListNode* current = &dummy ;
        while(l1->next != nullptr || l2->next != nullptr){
            current->val = (l1.val + l2.val) % 10 ;
            if(l1.val + l2.val >= 10){

            }
        }
    }
};