class Solution {
  public:
    vector<int> serialize(Node *root) {
        vector<int> arr;

        if (root == nullptr) {
            arr.push_back(-1);
            return arr;
        }

        arr.push_back(root->data);

        vector<int> left = serialize(root->left);
        vector<int> right = serialize(root->right);

        arr.insert(arr.end(), left.begin(), left.end());
        arr.insert(arr.end(), right.begin(), right.end());

        return arr;
    }

    int index = 0;

    Node* deSerialize(vector<int> &arr) {
        if (index >= arr.size() || arr[index] == -1) {
            index++;
            return nullptr;
        }

        Node* root = new Node(arr[index++]);

        root->left = deSerialize(arr);
        root->right = deSerialize(arr);

        return root;
    }
};