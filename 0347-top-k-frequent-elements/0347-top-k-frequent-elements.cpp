class Solution {
    struct compare{
    bool operator()(const pair<int, int>&i, const pair<int, int>&j) 
    { 
        // cout<< i.second << "  compare " << j.second << " " << endl;
        return i.second < j.second; 
    } 
};
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
          unordered_map<int,int>m;
        for(int i:nums)m[i]++;      // O(N)
        
       priority_queue<pair<int,int>,vector<pair<int,int>>,compare>p(m.begin(),m.end()); //O(N)
     
        vector<int>ans;
        while(k--){                 // O(klogn)
            // cout<< p.top().first << " i " << p.top().second<<endl;
            ans.push_back(p.top().first);
            p.pop();
        }
        return ans;
        
    }
};