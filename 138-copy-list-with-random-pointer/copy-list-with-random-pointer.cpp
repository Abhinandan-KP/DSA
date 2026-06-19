/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
void intercopy(Node*head)
{
    Node*temp=head;
    while(temp)
    {
        Node*nextele=temp->next;
        Node*copy=new Node(temp->val);
        copy->next=nextele;
        temp->next=copy;
        temp=nextele;
        //temp -> copy ->nextelement
    }
}
void connectrandom(Node*head)
{
    Node*temp=head;
    while(temp)
    {
        Node*copynode=temp->next;
        if(temp->random)
        {
            copynode->random=temp->random->next;
        }
        else
        {
            copynode->random=NULL;
        }
        temp=temp->next->next;
        //temp->copynode->(temp->next->next)
    }
}
Node*getdeep(Node*head)
{
    Node*temp=head;
    Node*dummy=new Node(-1);
    Node*res=dummy;
    while(temp)
    {
        res->next=temp->next;  // (res->next=temp->next(copy))
        res=res->next;
        temp->next=temp->next->next;
        temp=temp->next;
        // temp->res(copy)->(temp->next->next)
    }
    return dummy->next;
}
    Node* copyRandomList(Node* head) {
        if(!head) return NULL;
        intercopy(head);
        connectrandom(head);
        return getdeep(head);
    }
};