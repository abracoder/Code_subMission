class Solution {
    int solve(int egg, int floor,vector<vector<int>>&dp){
         if( floor == 0 || floor == 1) return floor;
          if(egg==1){
            return floor;
        }
        
        if(dp[egg][floor] != -1) return dp[egg][floor];
        
        int mini = INT_MAX;
        
        for (int i = 1; i < floor; i++){
            int temp = 1+ max(solve(egg-1,i-1,dp),solve(egg,floor-i,dp));
            
            mini = min(mini, temp);
            
            
        }
        
        return dp[egg][floor] = mini;
    }
    
    
public:
    int twoEggDrop(int n) {
        vector<vector<int>> dp (3, vector<int> (n+1, -1));
//         int mini = INT_MAX;
//         for(int k = 1; k< n;k++)
//         for(int i = 1; i< 3; i++){
//             for(int j = 1; j< n+1; j++){
//                 int temp = 1+ max(dp[i-1][k-1],dp[i][j-k]);
            
//             mini = min(mini, temp);
            
                
//             }
//         }
        
//    return mini;
        
        return solve( 2, n , dp);
        
        
        
    }
};