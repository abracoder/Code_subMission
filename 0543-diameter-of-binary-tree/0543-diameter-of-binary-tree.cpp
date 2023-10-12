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
    
    int diameterUtil(TreeNode *root, int &ans){
        
        if(!root ) return 0;
        
        int left = diameterUtil(root->left, ans);
        int right = diameterUtil(root->right, ans);
        
        int temp = 1+max(left,right);
        ans = max(ans, left+right);
        return temp;
        
    }
    
public:
    int diameterOfBinaryTree(TreeNode* root) {
        
        int ans = INT_MIN;
        
        int temp = diameterUtil(root,ans);
        
        return ans;
        
    }
};