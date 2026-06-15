/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
   Node*reverselist(Node*head)
   {
       Node*prev=NULL,*curr=head;
       while(curr)
       {  Node*nextnode=curr->next;
           curr->next=prev;
           prev=curr;
           curr=nextnode;
       }
       return prev;
   }
    Node* addOne(Node* head) {
        // code here
       
        head=reverselist(head);
         Node*current=head;
        int carry=1;
        while(current && carry)
        {
            int sum=current->data+carry;
            current->data=sum%10;
            carry=sum/10;
            if(!current->next&&carry)
            {
                current->next=new Node(carry);
                carry=0;
            }
            current=current->next;
        }
        head=reverselist(head);
        return head;
    }
};