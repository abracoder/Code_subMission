class Solution {
    
    int solve ( string t, string s, int n, int m,vector<vector<int>>&dp){
        if( n==0 || m==0 ) return 0;
        
        if(dp[n][m] != -1) return dp[n][m];
        
        if(t[n-1] == s[m-1]){
            
            dp[n][m]= 1+ solve(t,s, n-1, m-1,dp);
        }
       else {
           int l = -1, r =-1;
           if( dp [n][m-1] !=-1)
               l = dp[n][m-1];
            else {
                l = solve(t,s,n,m-1,dp);
                dp[n][m-1] = l;
            }
        
         if( dp [n-1][m] !=-1)
               r = dp[n-1][m];
            else {
                r = solve(t,s,n-1,m,dp);
                dp[n-1][m] = r;
            }
           
           
       dp[n][m] = max(l,r);
       }
        
        
        return dp[n][m];
    }
    
    
    
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        int n = text1.length();
        int m = text2.length();
        
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        
        return solve(text1,text2,n,m,dp);
        
        
        
    }
};