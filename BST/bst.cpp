#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

// Insert into BST
Node* insertBST(Node* root, int data) {
    if (root == NULL) {
        return new Node(data);
    }

    if (data < root->data) {
        root->left = insertBST(root->left, data);
    } else {
        root->right = insertBST(root->right, data);
    }

    return root;
}

// Create BST from input
Node* createBST() {
    Node* root = NULL;
    cout << "Enter data to insert into BST (-1 to stop):" << endl;
    int data;
    cin >> data;
    while (data != -1) {
        root = insertBST(root, data);
        cin >> data;
    }
    return root;
}

// Level Order Traversal using NULL marker
void levelOrderLineByLine(Node* root) {
    if (root == NULL) return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);  // Marker for end of first level

    cout << "Level order traversal (using NULL marker):" << endl;

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        if (current == NULL) {
            cout << endl; // End of level

            // If there are still nodes to process, push another marker
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << current->data << " ";

            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }
    }
}

int main() {
    Node* root = createBST();
    levelOrderLineByLine(root);
    return 0;
}
