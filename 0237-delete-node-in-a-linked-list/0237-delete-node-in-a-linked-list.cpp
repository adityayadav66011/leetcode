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
    void deleteNode(ListNode* node) {
       // Copy the value of the next node to the current node
        node->val = node->next->val;
        
        // Delete the next node
        ListNode* temp = node->next;
        node->next = node->next->next;
        delete temp;   
    }
};