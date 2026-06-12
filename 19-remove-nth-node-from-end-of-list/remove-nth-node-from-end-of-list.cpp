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
    ListNode* removeNthFromEnd(ListNode* head, int N) {
      int cnt=0;
      ListNode*temp=head;
      if(head==NULL) return NULL;
        while(temp!=NULL)
        {
            cnt++;
            temp=temp->next;
        }
        
         if(cnt==N) 
         {
            ListNode*newnode= head->next;
            delete head;
            return newnode;
         }
         int res=cnt-N;
         temp=head;
       for (int i = 1; i < res; i++) {
            temp = temp->next;
        }
     ListNode* newno=temp->next;
     temp->next=temp->next->next;
     delete newno;
     return head;
    }
};