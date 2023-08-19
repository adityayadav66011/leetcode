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
    ListNode* sortList(ListNode* head) {
    if(head==NULL || head->next==NULL)
    {
        return head;
    }    
    ListNode* temp=NULL;
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        temp=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    temp->next=NULL;
    ListNode* l1= sortList(head);
    ListNode* l2=sortList(slow);
    return mergelist(l1,l2);
    }

    ListNode* mergelist(ListNode* list1, ListNode * list2)
    {
        ListNode* current=new ListNode();
    ListNode* head=current;    
    while(list1 && list2)
    {
       if(list1->val <=list2->val)
       {
           current->next =list1;
           list1=list1->next;
       } 
       else
       {
           current->next=list2;
           list2=list2->next;
       }
       current=current->next;
    }
    if (list1) 
    {
            current->next = list1;
        } else 
        {
            current->next = list2;
        }
        
        return head->next;

    }

};