class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        
        sort(nums.begin(),nums.end());
        int n = nums.size();
        
        if(n <= 1) return n;
        
        
        int cnt = 0; 
        int maxi = INT_MIN;
        
        for (int i = 1; i < n; i++){
            cnt = 0;
            while ( i< n && (nums[i] - nums[i-1] == 1 || nums[i] - nums[i-1] == 0 )){
                if( nums[i] - nums[i-1] == 0)i++;
                else{
                    cnt++;
                    i++;
                }
            }
            maxi = max(maxi,cnt);
        }
        
        
        return maxi+1;
    }
};