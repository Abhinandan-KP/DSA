class Solution {
  public:
    ListNode *reverseKGroup(ListNode *head, int k) {
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *current = dummy;

        while (current) {
            ListNode *groupStart = current->next;
            ListNode *groupEnd = current;

          
            for (int i = 0; i < k && groupEnd; i++) {
                groupEnd = groupEnd->next;
            }

            if (!groupEnd) {
                break; 
            }

            ListNode *nextGroup = groupEnd->next;
            reverseGroup(groupStart, groupEnd);
            current->next = groupEnd;
            groupStart->next = nextGroup;
            current = groupStart;
        }

        return dummy->next;
    }

  private:
    // Helper function to reverse a k-group of nodes
    void reverseGroup(ListNode *head, ListNode *tail) {
        ListNode *prev = nullptr;
        ListNode *current = head;

        while (current != tail) {
            ListNode *nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }

        tail->next = prev;
    }
};