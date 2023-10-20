class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        
        int maxConsecutive = 0;
        int count=0;
        for (auto it: nums){
            if(it ==1){
                count++;
            }
            maxConsecutive = max(maxConsecutive,count);
            
            if ( it == 0 )
                count = 0;
        }
        
        return maxConsecutive;
    }
};