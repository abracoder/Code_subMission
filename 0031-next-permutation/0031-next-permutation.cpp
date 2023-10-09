class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        
        
        int i = nums.size() -1 ;
        int n = nums.size();
        
        while( i>0 && nums[i-1] >= nums[i]){
            i--;
        }
        
        if(i == 0) {
            reverse(nums.begin(),nums.end());
            return;
        }
        else{
            for ( int j = n-1 ; j >= i ; j--){
                if(nums[j] > nums[i-1]){
                    swap(nums[j],nums[i-1]);
                    break;
                }
            }
            
            reverse(nums.begin()+i, nums.end());            
        }
    }
};