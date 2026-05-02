class Solution {
  public:
    bool areIdentical(Node *head1, Node *head2) {
        while(head1 != NULL && head2 != NULL) {
            if(head1->data != head2->data) {
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }

        return (head1 == NULL && head2 == NULL);
    }
};