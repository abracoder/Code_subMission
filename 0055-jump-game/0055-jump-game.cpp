class Solution {
    
    bool solve( int idx, vector<int>& nums , vector<int>& dp){
       if(idx == nums.size() -1) return true;  //if I reach the last index, I should return true;
        if(nums[idx] == 0) return false; //if at any  point I reach an index with jump value = 0
		//,I'll get stuck and hence will return a false.
        
        if(dp[idx] != -1) return dp[idx];
        
        int reach = idx + nums[idx]; //the max jump that I can make
		//I can make jumps ranging from idx + 1, till reach, and hence will run a loop
		//to cover all those possbile jumps
        for(int jump=idx + 1; jump <= reach; jump++) {
		//if true, it means taking this jump led me to the last index.
            if(jump < nums.size() && solve(jump,nums,dp)) 
                return dp[idx]=true; 
        }
			
		//if I reach  here,  it means none of the jumps led  me to the  last index 
		//and hence returning, false.
        return  dp[idx] =false;
    }
    
public:
    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        
        return solve(0,nums,dp);
        
    }
};