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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head||!head->next) return head;
        ListNode*curr=head;
        while(curr && curr->next)
        {
            ListNode*nextnode=curr->next;
            if(curr->val == nextnode->val)
            {
                ListNode*del=nextnode;
                curr->next=nextnode->next;
                delete del;
            }
            else
   curr=curr->next;
        }
        return head;
    }
};