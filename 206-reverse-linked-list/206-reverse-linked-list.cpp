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
    ListNode* re(ListNode* p,ListNode* c) {
       if(c==NULL)return p;
       ListNode * t=c->next;
        c->next=p;
        return re(c,t);
        
}     
 
    
    ListNode* reverseList(ListNode* head) {
       
      return  re(NULL,head);
}     
 
  
 
 
 


    
};