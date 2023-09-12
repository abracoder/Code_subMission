class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        if( nums.size() <= 1) return false;
        
        
        unordered_map < int ,int > mpp;
        
        for ( auto it : nums){
             mpp[it] ++;
            
            if ( mpp[it] > 1) return true;
            
        }
        
        
        return false;
    }
};