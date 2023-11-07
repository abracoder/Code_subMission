class Solution {
    void permuteUtil(int index,int n, vector<int> &nums, vector<vector<int>> &res){
        
        
        if(index >=n){
            res.push_back(nums);
            return;
        }
        
        
        
        for(int i =index; i<n; i++){
            swap(nums[i],nums[index]);
            permuteUtil(index+1,n,nums,res);
            swap(nums[i],nums[index]);
            
        }
    }
    
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        
        
        
        vector<vector<int>> res;
        
        permuteUtil(0, nums.size(), nums, res);
        
        return res;
        
    }
};