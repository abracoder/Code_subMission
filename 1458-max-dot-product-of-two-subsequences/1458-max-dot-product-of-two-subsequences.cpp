class Solution {
    int solve(vector<int>& nums1, vector<int>& nums2,int n, int m){
        if(n == 0 || m == 0) return 0;
        
        int take = max(nums1[n] * nums2[m] + solve(nums1, nums2, n-1, m -1),0);
        int notTake = max(solve(nums1,nums2,n-1,m),solve(nums1,nums2,n,m-1));
        return max(take,notTake);
        
        
    }
    
    
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        
       int n = nums1.size();
        int m = nums2.size();
        vector<vector<int>> memo(n, vector<int>(m, INT_MIN));
        
        function<int(int, int)> dp = [&](int i, int j) {
            if (i == n || j == m) {
                return INT_MIN;
            }
            
            if (memo[i][j] != INT_MIN) {
                return memo[i][j];
            }
            
            memo[i][j] = max(
                nums1[i] * nums2[j] + max(dp(i + 1, j + 1), 0),
                max(dp(i + 1, j), dp(i, j + 1))
            );
            
            return memo[i][j];
        };
        
        return dp(0, 0);
        
    }
};