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

// Inorder Traversal: Left -> Root -> Right
void inorder(node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Preorder Traversal: Root -> Left -> Right
void preorder(node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Postorder Traversal: Left -> Right -> Root
void postorder(node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    node* root = createTree();

    cout << "\nInorder Traversal: ";
    inorder(root);

    cout << "\nPreorder Traversal: ";
    preorder(root);

    cout << "\nPostorder Traversal: ";
    postorder(root);

    cout << endl;
    return 0;
}


//output
Enter the value (-1 for NULL): 10
Enter left child of 10
Enter the value (-1 for NULL): 5
Enter left child of 5
Enter the value (-1 for NULL): -1
Enter right child of 5
Enter the value (-1 for NULL): -1
Enter right child of 10
Enter the value (-1 for NULL): 15
Enter left child of 15
Enter the value (-1 for NULL): -1
Enter right child of 15
Enter the value (-1 for NULL): -1

Inorder Traversal: 5 10 15 
Preorder Traversal: 10 5 15 
Postorder Traversal: 5 15 10 


=== Code Execution Successful ===