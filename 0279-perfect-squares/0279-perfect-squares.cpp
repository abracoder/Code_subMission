class Solution {
    int squareUtil(int n,vector<int> &dp){
        if(n < 4) return dp[n] = n;
        
        if(dp[n] != INT_MAX -1) return dp[n];
        
        int ans = n;
        for(int i = 1 ;i*i <= n; i++){
            int square = i*i;
            
            ans = min(ans,1+squareUtil(n - square,dp));
        }
        return dp[n] = ans;
    }
    
public:
    int numSquares(int n) {
        vector<int> dp(n+1, INT_MAX-1);
        
        return squareUtil(n,dp);
    }
};