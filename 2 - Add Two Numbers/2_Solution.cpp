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
        int c=0,d;
        ListNode *l3 = NULL;
        ListNode *h = NULL;
        while(l1!=NULL && l2!=NULL)
        {
            d=l1->val + l2->val + c;
            c=0;
            if(l3==NULL)
            {
                l3=new ListNode(d%10);
                h=l3;
            }
            else
            {
                l3->next=new ListNode(d%10);
                l3=l3->next;
            }
            c=d/10;
            l1=l1->next;
            l2=l2->next;
        }
        if(l1!=NULL)
        {
            while(l1!=NULL)
            {
                d=l1->val + c;
                c=0;
                l3->next=new ListNode(d%10);
                l3=l3->next;
                
                c=d/10;
                l1=l1->next;
            }
        }
        if(l2!=NULL)
        {
            while(l2!=NULL)
            {
                d=l2->val + c;
                c=0;
                l3->next=new ListNode(d%10);
                l3=l3->next;
                
                c=d/10;
                l2=l2->next;
            }
        }
        if(c!=0)
        {
            l3->next=new ListNode(c);
            l3=l3->next;
        }
        return h;
    }
};