class Solution {
    int solve(int idx, string& s,vector<int>&dp ){
        if(dp[idx] != -1) return dp[idx];
        
        if(idx == s.size()) return 1;
        
        if(s[idx] =='0') return 0;
        
        int res = solve(idx+1,s,dp);
        if( idx+1 < s.size() && (s[idx] == '1' || (s[idx] == '2' && s[idx+1] < '7')))
            res += solve(idx+2,s,dp);
        
        
        return dp[idx] = res;
        
        
        
        
    }
    
    
    
public:
    int numDecodings(string s) {
        
        
        if(s.empty()) return 0;
        
        vector<int> dp(s.size()+1, -1);
        
        return solve(0, s,dp);
        
    }
};