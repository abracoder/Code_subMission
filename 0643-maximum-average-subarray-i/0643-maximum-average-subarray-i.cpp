class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int i=0,j=0,n=nums.size();
        double sum =0;
        double maxi = INT_MIN;
        
        while(j<n){
            sum += nums[j];
            
            if( (j-i+1) < k) j++;
            
            else if ( (j-i+1) == k){
                
                double average = sum/k;
                
                maxi = max(maxi, average);
                sum -= nums[i];
                i++;
                j++;
                        
                                    
            }
            
            
            
        }
        
        return maxi;
        
    }
};