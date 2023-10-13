class Solution {
    vector<vector<int>> buildGraph(int n, vector<vector<int>>& pre){
        vector<vector<int>> adj(n);
        for(auto it : pre){
            adj[it[1]].push_back(it[0]);
            // indegree[it[0]]++
        }
        
        return adj;
    }
    
    bool dfs ( vector<int> &vis,vector<vector<int>> &adj, int node, vector<int> &pathVisit){
        vis[node] = 1;
        pathVisit[node] = 1;
        
        for (auto neighbour : adj[node]){
            if(!vis[neighbour]){
                if(dfs(vis,adj, neighbour, pathVisit) == true) 
                    return true;
            }
            else {
                if(pathVisit[neighbour]  ) return true;
            }
        }
        
        pathVisit[node] = 0;
        return false;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
//         vector<int> indegree(numCourses);
//         vector<vector<int>> adj = buildGraph(numCourses, prerequisites, indegree);
        
//         queue<int> q;
        
//         for (int i =0 ; i< numCourses; i++){
//             if(indegree[i] == 0)
//                 q.push(i);
//         }
        
//         int nodesVisited =0;
//         while(!q.empty()){
//             int node = q.front();
//             q.pop();
//             nodesVisited++;            
//             for (auto it : adj[node]){
//                 indegree[it]--;
//                 if(indegree[it] == 0){
//                     q.push(it);
//                 }
//             }
//         }
        
//         return nodesVisited == numCourses;
        vector<vector<int>> adj = buildGraph(numCourses, prerequisites);
        vector<int> vis(numCourses,0);     
        vector<int> pathVisit(numCourses,0);
        // int pathVisit[numCourses] = {0};
        for(int i = 0 ; i< numCourses; i++){
            
            if(!vis[i]){
                if(dfs(vis,adj,i,pathVisit)) // it means contains a cycle so return false; 
                    return false;
            }
            
        }
        return true;
        
    }
};


        
