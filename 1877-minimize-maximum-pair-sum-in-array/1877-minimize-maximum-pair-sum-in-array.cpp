class Solution {
public:
    int minPairSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int n = nums.size();
        
        int sum  = INT_MIN;
        for(int i = 0 ; i< n; i++){
            
            sum = max(nums[i]+nums[n-i-1],sum);
            
        }
        
        return sum;
        
    }
};