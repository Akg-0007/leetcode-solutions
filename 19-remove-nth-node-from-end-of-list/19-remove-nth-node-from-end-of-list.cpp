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
       // ListNode *s=head->next,*f=head;
       //  while(s)
       //  {
       //      if()
       //      s=s->next;
       //      f=f->next;
       //  }
        ListNode* i=head;
        int c=0,j=1;
        while(i){i=i->next;c++;}
        if(c==n)return head->next;
        for(i=head;j<c-n;j++){i=i->next;}i->next=i->next->next  ;
        return head;   
    }
};