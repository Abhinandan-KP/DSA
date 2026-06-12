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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr || head->next==nullptr||head->next->next==nullptr)
        return head;

        ListNode*odd=head;
        ListNode*evenhead=head->next;
        ListNode*even=evenhead;
        while(evenhead!=nullptr && evenhead->next!=nullptr)
        {
            odd->next=evenhead->next;
            odd=odd->next;
            evenhead->next=odd->next;
            evenhead=evenhead->next;
        }
        odd->next=even;
        return head;
    }
};