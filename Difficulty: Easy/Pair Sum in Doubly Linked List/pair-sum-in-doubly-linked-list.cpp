// User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        // code here
        vector<pair<int,int>>ans;
        if(head==nullptr) return ans;
        Node*left=head;
        Node*right=head;
        while(right->next!=nullptr)
        {
            right=right->next;
        }
        int curr_sum=0;
        while(left!=right && right->next!=left)
        {    curr_sum=left->data+right->data;
            if(curr_sum==target)
            {   
                ans.push_back({left->data,right->data});
            left=left->next;
            right=right->prev;}
            else if(curr_sum<target)
            {
                left=left->next;
            }
            else
            {
                right=right->prev;
            }
        }
        return ans;
    }
};