class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == nullptr) return nullptr;
        head->next = removeElements(head->next, val);
        if (head->val == val) {
            ListNode* nextNode = head->next;
            delete head;  // free memory in C++
            return nextNode;
        } else {
            return head;
        }
    }
};
