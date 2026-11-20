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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //dummy
        ListNode dummy(0);
        dummy.next = head;

        //pointers
        ListNode* slow = &dummy;
        ListNode* fast = &dummy;

        //start fast from n 
        for(int i =0; i<n; i++){
            fast=fast->next;
        }
        //check for the fast position 
        while(fast->next != nullptr){
            slow = slow->next;
            fast = fast->next;
        }

        //remove or skip the node next to slow

        slow->next = slow->next->next;


        return dummy.next;
        
    }
};