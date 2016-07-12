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
    ListNode* insertionSortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *p=head->next;
        head->next = NULL;
        while(p){
            ListNode *q = p->next;
            if(p->val<head->val){
                p->next = head;
                head = p;
            }
            else{
                ListNode *r = head;
                while(r->next&&r->next->val<p->val) r=r->next;
                p->next = r->next;
                r->next = p;
            }
            p = q;
        }
        return head;
    }
};
