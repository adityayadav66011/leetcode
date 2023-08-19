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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
/* length of both the linkedlist*/
    int n=0;
    int m=0;
    ListNode* dummy1=headA;
    ListNode* dummy2=headB;
    while(dummy1!=NULL)
    {
        n++;
        dummy1=dummy1->next;
    }
    while(dummy2!=NULL)
    {
        m++;
        dummy2=dummy2->next;
    }
    int t=abs(n-m);
    if(n>m)
    {
        while(t)
        {
            headA=headA->next;
            t--;
        }
    }
    else
    {
        while(t)
        {
            headB=headB->next;
            t--;
        }
    }
    while(headA&&headB)
    {
        if(headA==headB)
        {
            return headB;
        }
        headA=headA->next;
        headB=headB->next;
    }
    return NULL;

    }
};