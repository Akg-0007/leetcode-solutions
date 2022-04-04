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
    ListNode* swapNodes(ListNode* head, int k) {
         ListNode *s=head,*r=head;int c=0;
       
     while(s)
     {
         s=s->next;
         c++;
     }
       // if(k==2 && c==2)swap(head,)
        s=head;
        if((c-k)==0 && c==1)return head;
       for(int i=0;i<c-k;i++)
     {
         
         s=s->next;   
     }
         for(int i=0;i<k-1;i++)
     {
          
         r=r->next;   
     } 
swap(r->val,s->val);
        return head;
    }  
    
};