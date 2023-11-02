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
    
    
    pair<int,int> sumUtil(TreeNode* root,int &count){
        if(!root) return {0,0} ;
        
        pair<int,int> left = sumUtil(root->left,count);
        pair<int,int> right = sumUtil(root->right, count);
        
        int nodeSum = left.first + right.first + root->val;
        int nodeCount = left.second + right.second + 1;
        
        if(root->val == nodeSum/nodeCount) {
            count++;
        }
        
        return {nodeSum, nodeCount};
            
    }
public:
    int averageOfSubtree(TreeNode* root) {
        
        int count = 0;
        
        pair<int,int> res = sumUtil(root,count);
        
        return count;
   
        
    }
};