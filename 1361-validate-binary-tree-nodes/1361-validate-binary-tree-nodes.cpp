class Solution {
    int findRoot(int n, vector<int>& left, vector<int>& right) {
        unordered_set<int> children;
        children.insert(left.begin(), left.end());
        children.insert(right.begin(), right.end());

        for (int i = 0; i < n; i++) {
            if (children.find(i) == children.end()) {
                return i;
            }
        }

        return -1;
}
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        int root = findRoot(n,leftChild,rightChild);
        if(root == -1) return false;
        
        
        vector<int> visited(n,0);
        
        queue<int> q;
        q.push(root);
        visited[root] = 1;

        int i =0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            if(leftChild[node] != -1){
                if(!visited[leftChild[node]]){
                    visited[leftChild[node]] = 1;
                    q.push(leftChild[node]);
                }
                else
                    return false;
            }
            
            if( rightChild[node] != -1){
                if(!visited[rightChild[node]]){
                    visited[rightChild[node]] = 1;
                    q.push(rightChild[node]);
                }
                    
                else
                    return false;
            }
        }

    for(auto it: visited){
        if(!it) return false;
    }
        
    return true;
    }
};