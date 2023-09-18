class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<  int>> result;
        int n= nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> temp;        
        for(int i = 0; i < n; i++){
            int j = i+1;
            int k = n -1;
            while(j < k){   
                int sum = nums[i]+nums[j]+nums[k];
                if( sum ==  0){
                    temp.insert({nums[i],nums[j],nums[k]});
                    k--;
                    j++;
                   
                }
                else if ( sum < 0 )
                    j++;
            
                else 
                    k--;
            
            }

    
        }
        
        
        for (auto it : temp){
            
            result.push_back(it);
        }
    
        
        return result;
        
    
        
    }
};