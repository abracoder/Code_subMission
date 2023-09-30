class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> min_left(n);
        min_left[0] = nums[0];
        
        for(int i=1;i<n;i++){
            min_left[i] = min(min_left[i-1],nums[i]);
        }
        
        stack<int> stk;
        for(int i = n-1; i>=0; i--){
            
            // check if nums[i] > min_left[i]
            if(nums[i] > min_left[i]){
                
                
                while( !stk.empty() && stk.top() <= min_left[i]) stk.pop();
                
                if( !stk.empty() && stk.top() < nums[i]){
                    return true;
                }
                stk.push(nums[i]);
                
                
            }
            
            
        }
        
        return false;
        
    }
};