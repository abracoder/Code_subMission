class Solution {
public:
    int count ( vector<int> arr){
        
        
        int count = 0;
        for(auto it: arr){
            if (it == 1) count += 1;
        }
        
        return count;
    }
    
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
       
        priority_queue <pair<int,int> > maxh;
        int n = mat.size();
        int m = mat[0].size();
        
        
        for (int i = 0 ;i< mat.size();i++){
            
            int noOf1s = count( mat[i]);
            
            maxh.push({noOf1s, i});
            
            if( maxh.size() > k) maxh.pop();
            
            
        }
        
        vector<int> res(maxh.size());
        
        while (!maxh.empty()) {
            auto it = maxh.top();
            res[maxh.size()-1] = it.second;
            maxh.pop();

        }
        
        return res;
    }
};