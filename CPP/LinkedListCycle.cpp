/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
class Solution {
public:
    bool hasCycle(ListNode* head) {
        // this is checking that the Linked List has more
        if (head == nullptr || head->next == nullptr) {
            return false;
        }

        // creating a slow and fast pointer
        ListNode* slow = head;
        ListNode* fast = head;

        // while neither pointer equals null
        while (fast != nullptr && fast->next != nullptr) {
            
            // move slow and fast pointer
            slow = slow->next;
            fast = fast->next->next;

            if (fast == slow) {
                return true;
            }
        }

        return false;
    }
};
