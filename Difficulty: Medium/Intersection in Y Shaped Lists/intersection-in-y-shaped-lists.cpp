/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/

class Solution {
  public:
    Node* intersectPoint(Node* headA, Node* headB) {
        //  code here
        if(headA==nullptr || headB==nullptr) return nullptr;
         Node*ptrA=headA;
         Node*ptrB=headB;

         while(ptrA!=ptrB)
         {
             ptrA=(ptrA==nullptr)?headB:ptrA->next;
             ptrB=(ptrB==nullptr)?headA:ptrB->next;
         }
         return ptrA;
    }
};