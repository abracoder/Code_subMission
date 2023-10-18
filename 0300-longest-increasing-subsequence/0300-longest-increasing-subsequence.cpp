class Solution {
    int util(int index, int prevIndex, vector<int> &nums,vector<vector<int>> &dp){
        if (index == nums.size()) return 0;
        if(dp[index][prevIndex+1] != -1) return dp[index][prevIndex+1];
        
        int  notTake = 0 + util(index+1, prevIndex, nums,dp);
        
        int take = 0;
        
        if(prevIndex == -1 || nums[index] > nums[prevIndex]){
            take = 1 + util(index+1, index, nums,dp);
        }
        
        return dp[index][prevIndex+1] = max(take,notTake);
    }
    
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>>dp(nums.size(), vector<int>(nums.size()+1,-1));
        
        return util(0,-1,nums,dp);
    }
};