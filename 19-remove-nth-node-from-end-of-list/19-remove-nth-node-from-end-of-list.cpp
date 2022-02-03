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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* fast=head;
        for(int i=0;i<n;i++)
        {
            if(fast==NULL)
                return NULL;
            fast=fast->next;
        }
        if (!fast) return head->next;
        ListNode* slow=head;
        ListNode* temp;
        while(fast!=NULL)
        {
            temp=slow;        
            slow=slow->next;     
            fast=fast->next;
        }
       // delete(fast);
        temp->next=slow->next;      
        return head; 
    }
};