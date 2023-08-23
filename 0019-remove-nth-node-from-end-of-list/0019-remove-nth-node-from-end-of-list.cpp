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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    int len=1;
    ListNode* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        len++;
    }    
    if(len==n)
    {
        head=head->next;
        return head;
    }
    temp=head;
    len-=n;
    while(len>1)
    {
        temp=temp->next;
        len--;
    }
    temp->next=temp->next->next;
    return head;
    }
};