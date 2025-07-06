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
    ListNode* reverseList(ListNode* head) {

        // create new list for reversed
        ListNode* reversed = new ListNode(0);
        ListNode* tail = reversed; // tail points to reversed node

        ListNode* temp = nullptr;
        ListNode* prev = nullptr;

        // while head has not reached the end
        while (head != nullptr) {
            
            temp = head->next;
            head->next = prev;
            prev=head;
            head=temp;

            tail->next=prev;
        }


        ListNode* reversedList = reversed->next;
        delete reversed;
        return reversedList;
        
    }
};
