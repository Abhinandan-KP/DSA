/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        Node*fast=head;
        Node*slow=head;
        Node*temp=NULL;
        int length=1;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
           
            if(slow==fast)
            { temp=slow;
                
               while(temp->next!=slow)
               {
                   temp=temp->next;
                   length++;
               }
                return length;
            }
        }
       return 0;
    }
};