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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0) return head;
        ListNode*temp=head;
        int c=1;
        while(temp->next)
        {
            temp=temp->next;
            c++;
        }
        temp->next=head;
        k=k%c;
        int steps=c-k;
        ListNode*newtail=head;
        for(int i=1;i<steps;i++)
        {
            newtail=newtail->next;
        }
        ListNode*newhead=newtail->next;
        newtail->next=NULL;
        return newhead;
    }
};