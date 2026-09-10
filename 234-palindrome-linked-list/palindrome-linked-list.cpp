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
ListNode*reverse(ListNode*head)
{
    ListNode*prev=NULL;
    ListNode*curr=head;
    while(curr!=NULL)
    {
       ListNode*nextnode=curr->next;
        curr->next=prev;
        prev=curr;      
        curr=nextnode;
    }
    return prev;
}
    bool isPalindrome(ListNode* head) {
        if(head==NULL ||head->next==NULL) return true;
        ListNode*fast=head,*slow=head;
        while( fast!=NULL && fast->next!=NULL)
        {  slow=slow->next;
            fast=fast->next->next;
        }
       ListNode*sec=reverse(slow);
       ListNode*fir=head;
        while(fir!=NULL && sec!=NULL)
       { if(sec->val!=fir->val) return false;
          
          sec=sec->next;
          fir=fir->next; 
       }
       return true;
    }
};