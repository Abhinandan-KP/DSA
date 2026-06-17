class Solution {
public:
    Node* rotate(Node* head, int k) {
        if (!head || !head->next || k == 0) return head;
        
        Node* tail = head;
        int length = 1;
        while (tail->next != nullptr) {
            tail = tail->next;
            length++;
        }
        
        k = k % length;
        if (k == 0) return head;
        
        tail->next = head; 
        
        int stepsToNewTail = k; 
        Node* newTail = head;
        for (int i = 1; i < stepsToNewTail; i++) {
            newTail = newTail->next;
        }
        
        Node* newHead = newTail->next;
        newTail->next = nullptr;
        
        return newHead;
    }
};