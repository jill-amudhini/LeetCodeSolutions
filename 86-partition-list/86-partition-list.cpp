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
    
    ListNode* insertNode(ListNode* root, ListNode* newNode)
    {
        if(root==NULL)
        {
            root=newNode;
        }
        else
        {
            ListNode* temp=root;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newNode;
        }
        
        return root;
    }
    ListNode* partition(ListNode* head, int x) {
        
        if(head==NULL)
        {
            return head;
        }
        
        ListNode* temp=head;
        ListNode* lessx=NULL;
        
        int flag=0;
        while(temp->next!=NULL)
        {
            if(temp->val>=x)
            {
                flag=1;
            }
            if(temp->next->val<x && flag==1)
            {
                ListNode* newNode=temp->next;
                temp->next=temp->next->next;
                newNode->next=NULL;
                lessx=insertNode(lessx,newNode);
            }
            else
            {
                temp=temp->next;
                continue;
            }
        }
        
        if(flag==1)
        {
        temp=head;
        if(temp->val>=x)
        {
            head=insertNode(lessx,temp);
        }
        else
        {
            while(temp->next!=NULL)
            {
                if(temp->next->val>=x)
                {
                    ListNode* temp1=temp->next;
                    temp->next=NULL;
                    temp=insertNode(temp,lessx);
                    temp1=insertNode(temp,temp1);
                    break;
                }
                temp=temp->next;
            }
        }
        }
        
        return head;
    }
};