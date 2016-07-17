/**
 *  * Definition for singly-linked list.
 *   * struct ListNode {
 *    *     int val;
 *     *     ListNode *next;
 *      *     ListNode(int x) : val(x), next(NULL) {}
 *       * };
 *        */
class Solution {
    public:
        ListNode* removeElements(ListNode* head, int val) {
            if(!head) return NULL;
            ListNode *p,*q;
            p=q=head;
            while(head->val==val) {
                if(head->next){
                    head=head->next;
                } 
                else{
                    return NULL;
                }
            }
            while(p->next){
                q=p;
                p=p->next;
                while(p->val==val){
                    if(p->next){
                        q->next=p->next;
                        p=q->next;
                    }
                    else{
                        q->next=NULL;
                        p->val=NULL;
                    }
                }
            }
            return head;
        }
};
