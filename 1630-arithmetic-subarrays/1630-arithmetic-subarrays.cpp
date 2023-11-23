class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        
        vector<bool> result;
        
        for (int i = 0 ;i< l.size(); i++){
            vector<int> temp;
            for(int j = l[i]; j<= r[i]; j++){
                temp.push_back(nums[j]);
            }
            sort(temp.begin(), temp.end());
            int diff = temp[1]-temp[0];
            int k;
            for (k = 1 ; k< temp.size();k++){
                if(temp[k] - temp[k-1] != diff) {
                    result.push_back(false);
                    break;
                }
            }
            
            if(k == temp.size()) result.push_back(true);
            
          
        }
        
        return result;
        
        
        
        
        
        
        
    }
};