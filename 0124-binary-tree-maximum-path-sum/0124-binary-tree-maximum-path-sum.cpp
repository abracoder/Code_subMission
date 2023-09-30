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
    
    int solve(TreeNode* root, int &ans){
         if(!root) return 0;
        
        
        int left = solve(root->left,ans);
        int right = solve(root->right,ans);
        
        int temp = root->val + max(0,max(left,right));
        int curr = max(left+right+root->val, temp);
        
         ans = max (ans,curr);
        
        return temp;
    }
public:
    int maxPathSum(TreeNode* root) {
        
        int ans = INT_MIN;
        
        int result = solve(root, ans);
        
        return ans;
        
        
    }
};