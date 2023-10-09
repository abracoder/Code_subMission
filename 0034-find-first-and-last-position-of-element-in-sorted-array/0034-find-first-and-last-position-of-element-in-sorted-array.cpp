class Solution {
    int firstPost(vector<int>&nums, int target){
        
        int start = 0 ;
        int end = nums.size()-1;
        int pos = -1;
        int mid =0;
        while( start <= end ){
            mid = (start + end)/2;
            
            if(nums[mid] == target){
                pos = mid;
                end = mid-1;
            }
            else if ( nums[mid]  < target){
                start = mid+1;
            }
            else end = mid -1;
        }
        
        return pos;
    }
    
    
    int lastPost(vector<int>&nums, int target){
        
        int start = 0 ;
        int end = nums.size()-1;
        int pos = -1;
        int mid =0;
        while( start <= end ){
            mid = (start + end)/2;
            
            if(nums[mid] == target){
                pos = mid;
                start = mid + 1;
            }
            else if ( nums[mid]  < target){
                start = mid+1;
            }
            else end = mid -1;
        }
        
        return pos;
    }
    
    
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstPost(nums,target),lastPost(nums,target)};
    }
};