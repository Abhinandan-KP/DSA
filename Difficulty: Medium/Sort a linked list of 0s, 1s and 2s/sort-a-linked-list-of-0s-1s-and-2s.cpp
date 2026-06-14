/* Node is defined as
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
    Node* segregate(Node* head) {
        // code here
        Node*one=new Node(-1);
        Node * two=new Node(-1);
        Node* zero=new Node(-1);
        
        Node*on1=one;
        Node*tw2=two;
        Node*zer0=zero;
        
        Node*curr=head;
        while(curr!=NULL)
        {
            if(curr->data==0)
            {
                zer0->next=curr;
                zer0=zer0->next;
            }
            else if(curr->data==1)
            {
                on1->next=curr;
                on1=on1->next;
            }
            else
            {
                tw2->next=curr;
                tw2=tw2->next;
            }
            curr=curr->next;
        }
        zer0->next=one->next?one->next:two->next;
        on1->next=two->next;
        tw2->next = nullptr;
        return zero->next;
    }
};