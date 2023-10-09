class Solution {
public:
    int maxProduct(vector<int>& nums) {
         int maxi = INT_MIN;
         int n= nums.size();
        
        int prefix = 1 ;
        int suffix = 1;
        double maxSuffix , maxPrefix;
        for ( int i =0; i< n; i++){
            if( prefix == 0) prefix = 1;
            if (suffix == 0) suffix = 1;
            // maxSuffix = suffix*nums[i];
            // maxPrefix = prefix*nums[i];
            prefix *= nums[i];
            suffix *= nums[n-i-1];
            
            
//             if ( maxPrefix < INT_MAX && maxPrefix > INT_MIN && maxSuffix > INT_MIN && maxSuffix < INT_MAX ){
                
//             }
            
            maxi = max( maxi, max( prefix , suffix));
            
            
        }
        return (int)maxi;
        
        
    }
};