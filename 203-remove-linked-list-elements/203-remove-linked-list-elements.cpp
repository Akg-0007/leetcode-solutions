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
//   while(head!=NULL && head->val==val){
//             head=head->next;
//         }
//         ListNode* temp=head;
        
//         //if val is not present in the beginning, we need to iterate to val, then the node before val, will point to the node after val
//         while(temp!=NULL && temp->next!=NULL){
//             if(temp->next->val==val){
//                 temp->next=temp->next->next;
//             }
//             else{
//                 temp=temp->next;
//             }
//         }
//         return head;
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL && head->val==val){
             head=head->next;         }
        ListNode* curr=head;
        while( curr!=NULL && curr->next!=NULL)
        {
            if(curr->next->val==val){
                curr->next=curr->next->next;
                
            }
            else
            curr=curr->next;
        }
        return head;
    }
};