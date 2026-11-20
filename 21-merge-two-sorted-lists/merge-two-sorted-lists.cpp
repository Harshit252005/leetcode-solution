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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        //dummy node
        ListNode dummy(0);
        ListNode* temp = &dummy;

        //comparing and attaching
        while(list1 != nullptr && list2 != nullptr){
            //compare the values of pointer
            if(list1->val <= list2->val){
                //point the dummy pointer to the smaller list
                temp -> next = list1;
                //move the list1 forward
                list1 = list1->next;
            }
            else{
                //point the dummy pointer to the smaller list2 
                temp ->next = list2;
                //move liost2 forward
                list2 = list2->next;
            }
            //move the dummy pointer to next 
            temp = temp->next;
        }

        //attach rest of the list if left 
        if(list1 != nullptr){
            temp->next = list1;
        }else{
            temp->next = list2;
        }

        //return the ans(dummyhead+1)

        return dummy.next;
    }
};