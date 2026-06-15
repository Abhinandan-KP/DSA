/*
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
      Node*prev=NULL;
      Node*curr=head;
      while(curr!=nullptr)
      {
          Node*nextnode=curr->next;
          curr->next=prev;
          prev=curr;
          curr=nextnode;
      }
      return prev;
  }
    Node* addTwoLists(Node* l1, Node* l2) {
        // code here
        l1=reverselist(l1);
        l2=reverselist(l2);
         Node*dummy=new Node(-1);
    Node*temp=dummy;
    int carry=0;
    while(l1 || l2 || carry)
    { int sum=0;
        if(l1)
        {  sum+=l1->data;
            l1=l1->next;
        }
        if(l2)
        {
            sum+=l2->data;
            l2=l2->next;
        }
        sum+=carry;
        carry=sum/10;
        Node*nodenext=new Node(sum%10);
        temp->next=nodenext;
        temp=temp->next;
    }
    Node*ans=reverselist(dummy->next);
    while(ans!=NULL && ans->data==0 && ans->next!=NULL)
    {
        Node*zero=ans;
        ans=ans->next;
        delete zero;
    }
    return ans;
    }
};