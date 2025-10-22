/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

TreeNode*bstfrominorder(vector<int>& nums, int start, int end){
    if(start>end) return NULL;

    int mid=(start+end)/2;
    int ele=nums[mid];
    TreeNode*root=new TreeNode(ele);

    root->left=bstfrominorder(nums,start,mid-1);
    root->right=bstfrominorder(nums,mid+1,end);
    return root;

}

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return bstfrominorder(nums, 0, nums.size() - 1);
    }
};