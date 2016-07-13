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
    ListNode* reverseList(ListNode* head) {
        struct ListNode *r,*s,*t;
        if(head==NULL){
            return head;
        }
        else{
            t=s=head;
            r=head->next;
            while(r!=NULL){
                t=s;
                s=r;
                r=r->next;
                s->next=t;
                if(t==head){
                    t->next=NULL;
                }
            }
            head=s;
            r=s=head;
            return head;
        }
    }
};
