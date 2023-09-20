class Solution {
public:
 int findLowestCoins(vector<int> &coins, int cur, int amount, vector<vector<int>>& dp) {
        if (cur >= coins.size() || amount <= 0)
            return (amount == 0) ? 0 : INT_MAX - 1;   
        
     if(dp[cur][amount] != -1 ) return dp[cur][amount];
        int res = -1;
        if (coins[cur] > amount) {
            int doNotTakeCoin = 0 + findLowestCoins(coins, cur + 1, amount - 0,dp);
           dp[cur][amount] = res = doNotTakeCoin;
        }
        else {
            int takeCoin = 1 + findLowestCoins(coins, cur + 0, amount - coins[cur],dp);
            int doNotTakeCoin = 0 + findLowestCoins(coins, cur + 1, amount - 0,dp);
           dp[cur][amount] = res = min(takeCoin, doNotTakeCoin);
        }
     
        return dp[cur][amount] = res;
    }
    
    
    int coinChange(vector<int>& coins, int amount) {
        
        int n = coins.size();
        int T = amount;
      
        
         vector<vector<int>> dp(n,vector<int>(T+1,-1));
        int res = findLowestCoins(coins, 0, amount,dp);
        return (res == INT_MAX - 1 ) ? -1 : res;
        // return countWaysToMakeChangeUtil(coins,n-1, T, dp);
        
    }
};