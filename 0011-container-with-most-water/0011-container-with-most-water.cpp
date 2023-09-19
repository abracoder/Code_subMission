class Solution {
public:
    int maxArea(vector<int>& height) {
        
        
        int left = 0;
        int right = height.size()-1;
        int maxi = INT_MIN;
        
        while( left <= right){
            
            maxi =max ( maxi, min(height[left],height[right])*(right-left));
            
            
            if( height[right] <= height [left]) right --;
            
            else left ++;
            
            
        }
        
        return maxi;
        
    }
};