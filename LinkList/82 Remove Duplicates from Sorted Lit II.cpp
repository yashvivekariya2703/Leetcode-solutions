class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* prev = dummy;
        ListNode* current = head;
        
        while (current != NULL) {
            
            if (current->next != NULL &&
                current->val == current->next->val) {
                
                int value = current->val;
                
                while (current != NULL && current->val == value) {
                    ListNode* dup = current;
                    current = current->next;
                    delete dup;
                }
                
                prev->next = current;
            }
            else {
                prev = current;
                current = current->next;
            }
        }
        
        head = dummy->next;
        delete dummy;
        
        return head;
    }
};