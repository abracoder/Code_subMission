class Solution {
    int solve( int i, int j, int m, int n,vector<vector<int>>&dp){
        if(i==(m-1) && j==(n-1)) return 1;
        if(i >= m || j >= n ) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        
        return dp[i][j] = solve(i,j+1,m,n,dp) + solve(i+1,j,m,n,dp);
        
        
    }
    
    
public:
    int uniquePaths(int m, int n) {
//         vector<vector<int>>dp(m+1,vector<int>(n+1,0));
//         dp[m-1][n-1] = 1;
//         for(int i = m-1;i>=0;i--){
//             for(int j = n-1; j >=0; j--){
//                 dp[i][j] = max(dp[i][j],dp[i][j+1] + dp[i+1][j]);
                
//             }
//         }
        
//         return dp[0][0];
        
         int N = n + m - 2;
            int r = m - 1; 
            double res = 1;
            
            for (int i = 1; i <= r; i++)
                res = res * (N - r + i) / i;
            return (int)res;
        
        // return solve(0,0, m,n,dp);
    }
};