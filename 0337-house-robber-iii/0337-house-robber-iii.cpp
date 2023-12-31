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
    int solve(TreeNode* root , unordered_map<TreeNode*, int>& dp){
        if(!root ) return 0;
        
        if(dp.find(root) != dp.end()) return dp[root];
        int pick = root->val ;
        
            if(root->left) 
                pick += solve(root->left->left,dp)+solve(root->left->right,dp); 
            if(root->right)
                pick += solve(root->right->left,dp)+solve(root->right->right,dp);
        
        int notPick = solve(root->left,dp) + solve(root->right,dp);
        
        
        
        return dp[root]= max( pick, notPick);
        
        
    }
    
    
public:
    int rob(TreeNode* root) {
        unordered_map<TreeNode*, int> dp;
        
        return solve(root, dp);
        
        
    }
};