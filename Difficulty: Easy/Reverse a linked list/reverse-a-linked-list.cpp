class Solution {
public:
    Node* reverseList(Node* head) {
        Node* prev = NULL;
        Node* curr = head;

        while(curr != NULL) {
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }
};