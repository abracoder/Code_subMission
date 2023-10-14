class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i= 0;
        int j =0;
        int n = nums.size();
        if(n==1) return n;
        while( j < n){
            nums[i] = nums[j];
            while(j<n && nums[j] == nums[i]){
                j++;
            }
            
           i++;
        }
        return i;
    }
};