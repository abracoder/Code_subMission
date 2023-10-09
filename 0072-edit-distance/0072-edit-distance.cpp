class Solution {
    int solve(string word1, string word2, int ind1, int ind2,vector<vector<int>>& dp){
      if(ind1 < 0 || ind2 < 0 ) return max(ind1,ind2)+1;
        
      if(dp[ind1][ind2] != -1) return dp[ind1][ind2];  
      if(word1[ind1] == word2[ind2])
          return dp[ind1][ind2]=solve(word1, word2,ind1-1,ind2-1,dp);

      return dp[ind1][ind2]=1+min(solve(word1,word2,ind1,ind2-1,dp),
                                  min(solve(word1,word2,ind1-1,ind2,dp),
                                      solve(word1,word2,ind1-1,ind2-1,dp)));
        
        
        
        
        
    }
    
    
    
public:
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        vector<vector<int>> dp (n+1, vector<int>(m+1,-1));
        
        return solve(word1,word2, word1.size()-1,word2.size()-1,dp);
    }
};