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
    ListNode* removeElements(ListNode* head, int val) {
    // If head is NULL, return NULL
    if (!head) 
        return head;
    
    // Skip all leading nodes with val
    while (head && head->val == val) 
        head = head->next;
    
    // If head becomes NULL, return NULL
    if (!head) 
        return head;
    
    ListNode* prev = head;
    ListNode* curr = head->next;
    
    // Traverse the list and remove nodes with val
    while (curr) {
        if (curr->val == val) {
            prev->next = curr->next;
            delete curr; // Optional: Delete the node to free memory
            curr = prev->next;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }
    
    return head; 
}

};