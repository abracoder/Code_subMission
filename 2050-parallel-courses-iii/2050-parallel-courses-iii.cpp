class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        
        vector<int> inDegree(n);
        
        vector<vector<int>> graph(n, vector<int>());
        
        for( auto it : relations){
            
            int prev = it[0] - 1;
            int next = it[1] - 1;
            
            graph[prev].push_back(next);
            inDegree[next]++;
        }
        
        
        vector<int> dist(n);
        queue<int> q;
        for(int u =0; u<n ;u++){
            if(inDegree[u] == 0) {
                 dist[u] = time[u];
                 q.push(u);
            }
        }
        
        
        while(!q.empty()){
            int u = q.front();
            q.pop();
            for(int v : graph[u]){
                dist[v] =max(dist[v],dist[u]+time[v]);
                if(--inDegree[v] ==0)
                    q.push(v);
                   
                    
            }
            
            
        }
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            maxi = max(maxi, dist[i]);
        }
        return maxi;
    }
};