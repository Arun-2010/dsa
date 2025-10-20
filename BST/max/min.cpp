class Solution {
  public:
    int minValue(Node* root) {
        if (root == NULL)
            return -1; // or throw an exception / handle as per requirements
        
        while (root->left != NULL) {
            root = root->left;
        }
        return root->data;
    }
};

//

class Solution {
  public:
    int maxValue(Node* root) { 
        if (root == NULL)
            return -1; // or handle as per requirements
        
        while (root->right != NULL) { 
            root = root->right; 
        }
        return root->data;
    }
};
