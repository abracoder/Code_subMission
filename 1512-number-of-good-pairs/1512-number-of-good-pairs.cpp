class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        
        
        unordered_map<int,int> mpp;
        int count = 0;
        
        for(auto it: nums){
            
            if(mpp.find(it)!=mpp.end()){
                count += mpp[it];
                mpp[it]++;
            }
            else
            mpp[it]++;
        }
        
        return count;
        
    }
};