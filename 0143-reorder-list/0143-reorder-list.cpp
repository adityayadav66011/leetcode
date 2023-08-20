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
    ListNode* reverse(ListNode* head)
    {
        ListNode* p=NULL;
        ListNode* c=head;
        ListNode* n=NULL;
        while(c)
        {
            n=c->next;
            c->next=p;
            p=c;
            c=n;
            if(n!=NULL)
            n=n->next;
        }
        return p;
    } 
    void reorderList(ListNode* head) {
    ListNode* slow=head;
    ListNode* fast=head;  
    while(fast!=NULL&&fast->next!=NULL)
    {
       slow=slow->next;
       fast=fast->next->next;
    }  
    ListNode* second=reverse(slow->next);
    slow->next=NULL;
    ListNode* first=head;
    while(second)
    {
        ListNode* temp1=first->next;
        ListNode* temp2=second->next;
        first->next=second;
        second->next=temp1;
        first=temp1;
        second=temp2;
    }
    }
};