//Construct Binary Tree from Preorder and Inorder Traversal



class Solution {
public:
   int preindex=0;
   TreeNode* buildTreeUtil(vector<int>& preorder, vector<int>& inorder,int is,int ie) {
    if(is>ie) return NULL;

     TreeNode*root=new TreeNode(preorder[preindex]);
     preindex++;
     int index;
     for(int i=is;i<=ie;i++){
        if(inorder[i]==root->val){
            index=i;
            break;
        }

     }
     root->left=buildTreeUtil(preorder,inorder,is,index-1);
     root->right=buildTreeUtil(preorder,inorder,index+1,ie);
     return root;

   }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode*ans=buildTreeUtil(preorder,inorder,0,inorder.size()-1);
        return ans;

        
        
    }
};
