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
    ListNode* reverseList(ListNode* head,int k) {
         ListNode* curr = head;
         ListNode* ptr = NULL;
        
        while(k--&&curr != NULL)
        { ListNode* frw = curr->next;
        curr->next = ptr;
        ptr = curr;
        curr= frw;
            }
        return ptr;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL && count<k){
            temp=temp->next;
            count++;
        }
        if(count==k){
        ListNode* newHead=reverseList(head,k);
        head->next=reverseKGroup(temp,k);
        return newHead;
        }
        return head;


    //     vector<int>v;
    //     ListNode* temp=head;
    //     while(temp){
    //         v.push_back(temp->val);
    //         temp=temp->next;
    //     }
    //    int n=v.size();
    //        for(int i=0;i+k<=n;i+=k){
    //            reverse(v.begin()+i,v.begin()+(i+k));
    //        }
    //     ListNode* dummy=new ListNode(0);
    //     ListNode* tem=dummy;
    //     for(int it:v){
    //         tem->next=new ListNode(it);
    //         tem=tem->next;
    //     }
    //     return dummy->next;
    }
};