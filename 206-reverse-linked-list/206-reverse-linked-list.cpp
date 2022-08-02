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
    ListNode* reverseList(ListNode* head) {
        stack<int> s;
        ListNode* l = head;
        while(l!=NULL)
        {
            s.push(l->val);
            l=l->next;
        }
        l = head;
        while(l!=NULL)
        {
            l->val=s.top();
            s.pop();
            l=l->next;
        }
        
        return head;
    }
};