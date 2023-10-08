class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int res =0;
        unordered_map<int,int> mp;
        for (auto it: nums){
            mp[it]++;
            if(mp[it] >=2) return it;
            
        }
        
        return res;
        
    }
};