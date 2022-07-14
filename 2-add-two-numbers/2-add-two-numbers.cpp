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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* f=new ListNode();
        ListNode* temp=f;
        int carry=0;
        while (l1 or l2 or carry)
        {
            int sum=0;
            if(l1){sum+=l1->val;            l1=l1->next;}

            
           if(l2){ sum+=l2->val;
            l2=l2->next;}
            sum=sum+carry;
            carry=sum/10;
            ListNode* no= new ListNode(sum%10);
            temp->next=no;
            temp=temp->next;
        }
        return f->next;
    }
};