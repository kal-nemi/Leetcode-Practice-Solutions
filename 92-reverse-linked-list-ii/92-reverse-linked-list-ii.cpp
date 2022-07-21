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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        //make a dummy node
        ListNode* dummy = new ListNode();
        ListNode *pre = dummy, *curr ;
        dummy ->next = head;
        
        //find left position
        for(int i=0; i<left-1; i++)
        {
            pre = pre->next;
        }
        curr = pre->next;
        //Now reverse the list till right
        for(int i = 0; i<right - left; i++)
        {
            ListNode* temp = pre->next;
            pre->next = curr->next;
            curr->next = curr->next->next;
            pre->next->next = temp;
            
        }
        return dummy->next;
        
        
    }
};