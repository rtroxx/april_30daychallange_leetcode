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
    ListNode* middleNode(ListNode* head) {
        int c=0;
        if(head->next==NULL)
            return head;
        ListNode *p=head;
        ListNode *q;
        while(head!=NULL){
            c++;
            head=head->next;
        }
       // cout<<c<<endl;
        if(c&1)
            c=c/2;
        else
            c=c/2;
        //c--;
        while(c--){
            p=p->next;
        }
       
        return p;
        
    }
};
