class Solution {
    void dfs(int node, int prev, vector<int> &ans,unordered_map<int,vector<int>> &mp){
        
        ans.push_back(node);
        for(int neighbour:mp[node] ){
            if(neighbour != prev){
                dfs(neighbour,node,ans, mp);
            }
        }
        
    }
    
    
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        
        
        unordered_map<int,vector<int>>mp;
        
        for(auto it : adjacentPairs){ // building the graph
            mp[it[0]].push_back(it[1]);
            mp[it[1]].push_back(it[0]);
        }
        
        int root =0;
        
        for(auto &pair : mp){
            if(pair.second.size() == 1){
                root = pair.first;
                break;
            }
        }
        int curr = root;
        vector<int> ans;
        ans.push_back(curr);
        int prev = INT_MAX;
        
        while(ans.size() < mp.size()){
            for(int neighbour : mp[curr]){
                if(neighbour != prev){
                    ans.push_back(neighbour);
                    prev = curr;
                    curr = neighbour;
                    break;
                }
            }
        }
        
        // dfs(root, INT_MAX,ans,mp);
        return ans;
    }
};