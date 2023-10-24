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
    vector<int> largestValues(TreeNode* root) {
        vector<int> result;
        if(!root) return result;
        
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int n = q.size();
            int maxi = INT_MIN;
            for(int i=0;i<n; i++){
                auto it = q.front();
                q.pop();
                maxi = max(maxi, it->val);
                if(it->left) q.push(it->left);
                if(it->right)q.push(it->right);
            }
            
            result.push_back(maxi);
            
        }
        return result;
        
    }
};