class Solution {
    
      int solve(int ind, vector<int> &nums,vector<int> &dp){
        
        if(ind == 0) return nums[ind];
        if(ind < 0) return 0;
        
        if(dp[ind] != -1) return dp[ind];
        
        
        int pick = nums[ind] + solve(ind-2,nums,dp);
        
        int notPick = 0 + solve(ind-1,nums,dp);
        
        
        return dp[ind] = max(pick,notPick);
        
        
        
    }
public:
    int rob(vector<int>& nums) {
        
        
        int n = nums.size();
        if(n == 1) return nums[0];
        
        vector<int> dp1(n,-1);
        vector<int> dp2(n,-1);
        
        
        
        vector<int> nums1;
        
        vector<int> nums2;
        
        
        
        
        for(int i =0; i<n; i++){
            if(i != 0)
                nums1.push_back(nums[i]);
            if(i != n-1)
                nums2.push_back(nums[i]);
            
        }
        return max(solve(nums1.size()-1,nums1,dp1),solve(nums2.size()-1,nums2,dp2));
        
    }
};