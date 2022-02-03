class Solution {
public:
    void mergelist(ListNode *h1, ListNode *h2){
        ListNode* temp = h2, *curr =h1;
        while(h2!=NULL){
            temp = h2;
            h2= h2->next;
            temp->next = curr->next;
            curr->next = temp;
            curr= temp->next;
        }
    }
    ListNode* reverse( ListNode* node){
            ListNode *prev = NULL, *next = NULL, *curr = node;
            while(curr!=NULL){
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr= next;
            }
        return prev;
    }
    ListNode* middle(ListNode* node){
        ListNode *slow = node, *fast = node;
        while(fast->next!=NULL && fast->next->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    void reorderList(ListNode* head1) {
        ListNode* mid = middle(head1);
        ListNode* head2 = reverse(mid->next);
        mid->next = NULL;
        mergelist(head1,head2);  
    }
};