class Solution {
    
    void subsetUtil(int index, vector<int>& nums, int n, set<vector<int>> & tempSet,vector<int> &temp){
        

        if(index == n){
            tempSet.insert(temp);
            return;
        }
        temp.push_back(nums[index]);
        subsetUtil(index+1,nums, n, tempSet,temp);
        temp.pop_back();
        subsetUtil(index+1,nums, n, tempSet,temp);
        
        
        
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> tempResult;
        sort(nums.begin(),nums.end());
        vector<int> temp;    
        subsetUtil(0, nums, nums.size(),tempResult,temp);
    
        
        vector<vector<int>> result(tempResult.begin(),tempResult.end());
    
        return result;
    
    
    }
};