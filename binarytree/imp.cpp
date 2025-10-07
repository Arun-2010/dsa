#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Function to create the tree using recursion
node* createTree() {
    cout << "Enter the value (-1 for NULL): ";
    int data;
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    // Create the current node
    node* root = new node(data);

    // Create left and right subtrees
    cout << "Enter left child of " << data << endl;
    root->left = createTree();

    cout << "Enter right child of " << data << endl;
    root->right = createTree();

    return root;
}

int main() {
    node* root = createTree();

    // No traversal or output needed at this point
    return 0;
}
