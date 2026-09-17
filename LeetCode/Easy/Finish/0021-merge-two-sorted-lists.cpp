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

 //Runtime 0ms(100%) | Memory Usage 19.5MB(62.75%)
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0) ;
        ListNode* current = &dummy ;

        while (list1 && list2) {
            if (list1->val < list2->val) {
                current->next = list1 ;
                list1 = list1->next ;
            } else {
                current->next = list2 ;
                list2 = list2->next ;
            }
            current = current->next ;
        }

        // one of the lists is empty, so append the other list to the merged list
        current->next = list1 ? list1 : list2 ; 
        return dummy.next ;
    }
};