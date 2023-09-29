class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
        int countInc = 0;
        int countDec = 0;
        int n = nums.size();
        
        for(int i=0; i<n-1; i++){
            if(nums[i+1] >= nums[i])
                countInc++;
            if(nums[i+1] <= nums[i])
                countDec++;
        }
        
        if( countInc == n-1 || countDec == n-1)
            return 1;
        return 0;
        
    }
};