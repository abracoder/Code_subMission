class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        
        int n = intervals.size(), i = 0;
        
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        
        
        
        for(int i = 0; i< n; i++){
            
            if( res.empty() ||intervals[i][0] > res.back()[1]){
                res.push_back(intervals[i]);
               
            }
            else {
                 res.back()[1] = max(res.back()[1],intervals[i][1]);
                
                
            }
            
        }
        
        return res;
    }
};