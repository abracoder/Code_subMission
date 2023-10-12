class Solution {
    vector<vector<int>> buildGraph(int n, vector<vector<int>>& pre,vector<int> &indegree){
        vector<vector<int>> adj(n);
        for(auto it : pre){
            adj[it[1]].push_back(it[0]);
            indegree[it[0]]++;
        }
        
        return adj;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<int> indegree(numCourses);
        vector<vector<int>> adj = buildGraph(numCourses, prerequisites, indegree);
        
        queue<int> q;
        
        for (int i =0 ; i< numCourses; i++){
            if(indegree[i] == 0)
                q.push(i);
        }
        
        int nodesVisited =0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            nodesVisited++;
            
            
            for (auto it : adj[node]){
                indegree[it]--;
                if(indegree[it] == 0){
                    q.push(it);
                }
            }
        }
        
        return nodesVisited == numCourses;
        
    }
};


        
