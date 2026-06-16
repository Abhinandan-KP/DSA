/* Structure of a link list node
class Node {
  public:
    int data;
    Node* next;
    Node* prev;
    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        // code here
        Node*curr=head;
        if(!head||!head->next) return head;
        while(curr && curr->next)
        {
            Node*nextnode=curr->next;
            if(curr->data==nextnode->data)
            {
                Node*del=nextnode;
                curr->next=nextnode->next;
                 if(curr->next!=NULL)
                {
                    curr->next->prev=curr->next;
                }
                delete del;
            }
            else
            {   
                curr=curr->next;
            }
            
    }
    return head;
    }
};