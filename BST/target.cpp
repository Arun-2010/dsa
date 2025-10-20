// Function to search for target in BST
bool searchInBST(Node* root, int target) {
    if (root == nullptr)
        return false;

    if (root->data == target)
        return true;
    else if (target < root->data)
        return searchInBST(root->left, target);
    else
        return searchInBST(root->right, target);
}