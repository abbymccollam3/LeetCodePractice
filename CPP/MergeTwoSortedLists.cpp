
//  Definition for singly-linked list.
//   struct ListNode {
//       int val;
//       ListNode* next;
//       ListNode() : val(0), next(nullptr) {}
//       ListNode(int x) : val(x), next(nullptr) {}
//       ListNode(int x, ListNode *next) : val(x), next(next) {}
//   };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* dummy = new ListNode(0); // dummy node to serve as start of sorted list
        ListNode* tail = dummy; //pointing to start of list

        // while both lists are pointing to some value
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) { // if data at current list 1 node is less than list 2, add to dummy list
                tail->next = list1; // we attach the value at list1
                list1 = list1->next; // and we set the value of list1 to the next node in the list
            }
            else {
                tail->next = list2;
                list2 = list2->next;
            }
            // need to point tail to the next nodd
            tail = tail->next;
        }

        // one of the lists == nullpt
        if (list1 == nullptr) {
            tail->next = list2;
            list2 = nullptr;
        }
        else {
            tail->next = list1;
            list1 = nullptr;
        }

        ListNode* mergedList = dummy->next; //the merged list is the one after dummy
        delete dummy;
        return mergedList;
    }
};
