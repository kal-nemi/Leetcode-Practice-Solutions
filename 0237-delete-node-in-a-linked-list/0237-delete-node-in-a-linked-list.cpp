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
        //copy the next nodes value to this one 
        ListNode *dummy = node->next;
        *node = *dummy;
        delete dummy;
        
        
        
    }
};