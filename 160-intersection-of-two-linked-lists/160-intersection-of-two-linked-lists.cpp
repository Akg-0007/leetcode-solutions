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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
     ListNode *B=headA;
    
           ListNode *C=headB;
        while(B!=NULL && C!=NULL && B!=C){
            B=B->next;
           C=C->next;
           if(B==C)return B;
            if(B==NULL)B=headB;
            if(C==NULL)C=headA;
        
            
            
        }
        return B;
        
    }
};