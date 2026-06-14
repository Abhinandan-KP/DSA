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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
       while(headA!=NULL)
       {  ListNode*curr=headB;
           while(curr!=NULL)
           {
              if(curr==headA)  return headA;
              curr=curr->next;
           }
           headA=headA->next;
       }
       return NULL;
    }
};