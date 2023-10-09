class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        
        int n = prices.size();
        int maxProfit = INT_MIN;
        
        int mini = prices[0];
        int profit = 0;
        for (int i = 0; i < n ;i++){
            
            profit = prices[i] - mini;
                
            maxProfit = max( maxProfit, profit);
            mini = min( mini, prices[i]);
                
        }
        return maxProfit >= 0 ? maxProfit : 0 ;
        
    }
};