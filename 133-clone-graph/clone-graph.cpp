/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
private:
    unordered_map<Node*, Node*> visitedclones;

public:
    Node* cloneGraph(Node* node) {
        if(node == nullptr)
            return nullptr;

        if(visitedclones.find(node) != visitedclones.end())
        {
            return visitedclones[node];
        }

        Node* clone = new Node(node->val);
        visitedclones[node] = clone;

        for(Node* nbr : node->neighbors)
        {
            clone->neighbors.push_back(cloneGraph(nbr));
        }

        return clone;
    }
};