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
   
    
    ListNode *detectCycle(ListNode *head) {
        if( !head||head->next==NULL)return NULL;
       ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)break;
        }
       // if(fast==NULL && fast->next==NULL)return NULL;
        if(slow!=fast)return NULL;
        slow=head;
        while(slow!=fast)
        {
           slow=slow->next;
        fast=fast->next; 
        }
        return slow;
    }   
    
};