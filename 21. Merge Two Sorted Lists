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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *c=NULL,*head=NULL;
        int i,l,r,flag=0;
        if(l1==NULL&&l2==NULL) return l1;
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        if((l1->val)<=(l2->val)){
            if(c==NULL&&flag==0){
                flag=1;
            }
            c=l1;
            l1=l1->next;
            if(flag==1) head=c;
            flag=0;
        }
        else if((l1->val)>(l2->val)){
            if(c==NULL&&flag==0){
                flag=1;
            }
            c=l2;
            l2=l2->next;
            if(flag==1) head=c;
            flag=0;
        }
        while(l1&&l2){
            if((l1->val)<=(l2->val)){
                c->next=l1;
                l1=l1->next;
                c=c->next;
            }
            else if((l1->val)>(l2->val)){
                c->next=l2;
                l2=l2->next;
                c=c->next;
            }
        }
        if(l1==NULL){
            while(l2!=NULL){
                c->next=l2;
                c=c->next;
                l2=l2->next;
            }
        }
        if(l2==NULL){
            while(l1){
                c->next=l1;
                c=c->next;
                l1=l1->next;
            }
        }
        return head;
    }
};
