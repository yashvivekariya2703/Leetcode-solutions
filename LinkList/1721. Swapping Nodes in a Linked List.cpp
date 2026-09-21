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
    ListNode* swapNodes(ListNode* head, int k) {
        int count=0;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        ListNode*first=head;
        for(int i=1;i<k;i++)
        {
            first=first->next;
        }
        ListNode *second=head;
        for(int i=1;i<=count-k;i++)
        {
            second=second->next;
        }
        int tempvalue;
        tempvalue=first->val;
        first->val=second->val;
        second->val=tempvalue;
        return head;

    }
};