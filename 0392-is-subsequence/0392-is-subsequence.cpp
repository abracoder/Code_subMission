class Solution {
    
    void print(vector<vector<int>>dp,int n, int m){
        
        for ( auto it : dp){
            for ( auto i : it){
                cout << i << " ";
                
            }
            cout << endl;
        }
    }
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        
        
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
                               
                               
        for(int i =1 ;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1] == t[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                    // cout << " equal " << dp[i][j];
                }else
                    dp[i][j] = max( dp[i][j-1],dp[i-1][j]);
            }
        }
                               
            // cout << dp[n][m]  ;    
            // print( dp, n, m);
            if( dp[n][m] == s.size()) return true;
                               
            return false;
        
        
        
    }
};