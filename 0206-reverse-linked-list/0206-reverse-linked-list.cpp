class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        while (head) {
            ListNode* next_node = head->next; // store next
            head->next = prev;                // reverse
            prev = head;                      // move prev
            head = next_node;                 // move head
        }
        return prev;
    }
};
