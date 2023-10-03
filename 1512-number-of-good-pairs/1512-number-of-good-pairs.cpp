class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        
        
        unordered_map<int,int> mpp;
        int count = 0;
        
        for(auto it: nums){
            
           count += mpp[it];
            mpp[it]++;
        }
        
        return count;
        
    }
};