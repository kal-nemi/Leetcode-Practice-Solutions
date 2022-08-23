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
    bool isPalindrome(ListNode* head) {
        // tasks to do
        // 1 find the middle - fast slow pointer
        // 2 reverse the ll from middle
        // compare first half with later half
        
        if(head == NULL) return true;
        ListNode *slow=head ,*fast=head;
        
        ListNode *curr, *prev = NULL;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        curr = slow->next;
        while(curr!=NULL)
        {
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        // ListNode * rev = prev;
        
        ListNode *now = head;
        while(prev!=NULL)
        {
            if(prev->val!=now->val)
                return false;
            prev = prev->next;
            now  = now->next;
        }
        return true;
        
        
        
    }
};