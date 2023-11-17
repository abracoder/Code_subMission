class Solution {
public:
    int minPairSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int n = nums.size();
        
        int sum  = INT_MIN;
        int left = 0 ,right = n-1;
        while(left < right){
            
            sum = max(nums[left++]+nums[right--],sum);
            
        }
        
        return sum;
        
    }
};