// Find minimum value (iterative)
int findMin(Node* root) {
    if (root == null) {
        cout << "Tree is empty!" << endl;
        return -1;
    }

    while (root->left != null)
        root = root->left;

    return root->data;
}

// Find maximum value (iterative)
int findMax(Node* root) {
    if (root == null) {
        cout << "Tree is empty!" << endl;
        return -1;
    }

    while (root->right != null)
        root = root->right;

    return root->data;
}
