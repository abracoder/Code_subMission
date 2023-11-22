class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        
        
        unordered_map<int, vector<int>> mp;
        
        for(int row  = nums.size()-1; row>= 0; row--){
            
            for(int col = 0;col < nums[row].size(); col++){
                int diagonal = row + col;
                
                mp[diagonal].push_back(nums[row][col]);
                
            }
        }
        
        vector<int> ans;
        
        int curr =0;
        
        while(mp.find(curr) != mp.end()){
            for(int num : mp[curr]){
                ans.push_back(num);
            }
            curr++;
        }
        
        return ans;
        
    }
};