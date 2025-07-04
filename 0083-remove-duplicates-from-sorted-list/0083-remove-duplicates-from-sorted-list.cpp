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
        ListNode* head1=head;;
        while(head1!=nullptr&&head1->next!=nullptr){
            if(head1->val==head1->next->val){
                //ListNode* todelete = head1->next;
                head1->next=head1->next->next;
                //delete todelete;
            }
            else{
                head1=head1->next;
            }
        }
        return head;
    }
};