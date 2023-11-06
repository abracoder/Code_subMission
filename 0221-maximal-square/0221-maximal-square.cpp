class Solution {
    int maxSquareUtil(int i , int j,int n, int m,vector<vector<char>> &mat, vector<vector<int>> &dp,int &sq){
        
        if(i >= n || j >= m ) return 0;
        
        // if(dp[i][j] != -1) return dp[i][j];
        for(; i<n; i++){
            for(;j<m; j++){    
                 if(mat[i][j] != '0'){
                     dp[i][j] = 1 + min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
                }
                else 
                  dp[i][j] =0;
            }

            sq = max(sq,dp[i][j]);        
            cout<<sq ;

        }
        // return sq;
        return dp[i][j];
        
    }
    
    
    
    
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        int sq = 0;
        
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if (!i || !j || matrix[i][j] == '0') {
                    dp[i][j] = matrix[i][j] - '0';
                } else {
                    dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
                }
                sq = max(sq,dp[i][j]);

            }
        }
        
        // int ans = maxSquareUtil(1,1,n,m,matrix,dp,sq);
        
        return sq*sq;
        
        
    }
};