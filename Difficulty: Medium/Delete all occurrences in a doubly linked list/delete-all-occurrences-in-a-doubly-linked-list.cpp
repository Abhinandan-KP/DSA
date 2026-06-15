/* a Node of the doubly linked list
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};
*/

class Solution {
  public:

    // Function to delete a specified node from the linked list
    Node* deleteAllOccurOfX(Node* head, int x) {

        // code here
        Node*curr=head;
        while(curr)
        {
            if(curr->data==x)
            { Node*nextnode=curr->next;
                if(curr==head)
                {
                    head=head->next;
                    if(head!=nullptr)
                    head->prev=nullptr;
                }
                else
                {
                    curr->prev->next=curr->next;
                    if(curr->next!=NULL)
                    {
                        curr->next->prev=curr->prev;
                        
                    }
                }
                delete curr;
                curr=nextnode;
            }
            else
            {
                curr=curr->next;
            }
        }
        return head;
    }
};