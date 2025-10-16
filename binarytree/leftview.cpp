class Solution {
public:
    // Helper function
    void leftViewHelper(Node* root, int level, vector<int>& result) {
        if (root == NULL) return;

        // If this is the first node at this level
        if (level == result.size()) {
            result.push_back(root->data);
        }

        // Visit left first, then right
        leftViewHelper(root->left, level + 1, result);
        leftViewHelper(root->right, level + 1, result);
    }

    // Main function
    vector<int> leftView(Node *root) {
        vector<int> result;
        leftViewHelper(root, 0, result);
        return result;
    }
};
