class Solution {
public:
   int noOfWays(int i, int n,vector<int> &dp){
        
        if(i == n) return 1;
       
        if (i > n) return 0;
       if(dp[i] != -1) return dp[i];
        
        dp[i] = noOfWays(i+1, n,dp) + noOfWays(i+2,n,dp);
       
       return dp[i];
        
        
        
        
    }
    
    int climbStairs(int n) {
        int steps = 0;
        vector < int> dp(n+1,-1);
       return noOfWays(0,n,dp);
        
        
    }
};