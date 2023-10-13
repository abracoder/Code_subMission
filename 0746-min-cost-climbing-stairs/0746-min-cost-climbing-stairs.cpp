class Solution {
    int costUtil(int i, vector<int> &cost,vector<int> &dp){
        int n =cost.size();
        if(i >= n) return 0;
        if(dp[i]!=-1) return dp[i];
        
        int cost1 = cost[i] + min(costUtil(i+1,cost,dp),costUtil(i+2,cost,dp));
        // int cost2 = 0;
        // if(i < n)
        //     cost2 = cost[i] + costUtil(i+2,cost,dp);
        return dp[i] = cost1;
    }
    
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+1,-1);
        return min(costUtil(0,cost,dp),costUtil(1,cost,dp));
    }
};