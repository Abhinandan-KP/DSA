/*
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        if(head==NULL) return NULL;
        if(x==1)
        {    Node*temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        
       Node*node=head;
        int i=1;
        while(i!=x-1)
        {node=node->next;
        i++;}
        Node*temp=node->next;
        node->next=temp->next;
       
          return head;
    }
};