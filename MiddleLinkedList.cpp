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
    ListNode* middleNode(ListNode* head) {

        // BASE CASE
        if (head == NULL) {
            return nullptr;
        }

        // make a new list and count how many nodes
        ListNode* slow = head;
        ListNode* fast = head;

        // always need to check one ahead pointers to make sure it's not NULL
        while (fast != NULL && fast->next != NULL){ //fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};
