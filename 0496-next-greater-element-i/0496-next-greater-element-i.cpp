class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int> s;
        unordered_map<int,int> mp;
        
        
        for (auto it : nums2){
            
            
            while(!s.empty() && s.top() < it){
                mp[s.top()] = it;
                s.pop();
            }
            s.push(it);
            
        }
        
        
        vector<int> res(nums1.size(),-1);
        int i=0;
        
        for (auto it : nums1){
            
            if(mp.find(it) != mp.end())
                res[i] = mp[it];
            i++;
        }
                    
        
        return res;
        
    }
};