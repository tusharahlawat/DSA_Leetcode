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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0,head);
        ListNode* prev = dummy;
        ListNode* curr = head;
        while(curr!=NULL){
            if(curr->next!=NULL&&curr->val==curr->next->val){
                while(curr->next!=NULL&&curr->val==curr->next->val){
                    curr=curr->next;
                }
                prev->next=curr->next;

            }
            else{
                prev=curr;
            }
            curr=curr->next;
        }
        return dummy->next;
    }
};