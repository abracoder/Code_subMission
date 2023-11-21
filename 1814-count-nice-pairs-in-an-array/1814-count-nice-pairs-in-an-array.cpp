class Solution {
    int reverseInt(int num){
        
        int ans =0;
        
        while( num ){
            int mod = num %10;
            ans = ans*10+mod;
            num /=10;
        }
        
        return ans;
        
    }
public:
    int countNicePairs(vector<int>& nums) {
        
        
        int n =nums.size();
        int MOD = 1e9+7;
        int count = 0;
        
        
        unordered_map<int,int> mp;
        
        for(int i = 0 ; i < n; i++){
            nums[i] = nums[i] - reverseInt(nums[i]);
        }
        
        for(auto it : nums){
            if(mp.find(it) != mp.end()){
                count %= MOD;
                count += mp[it];
                
            }
            mp[it]++;
        }
        
        
//         for(int i =0 ; i<n;i++){
            
//             int numi = nums[i];
//             int revi = reverseInt(numi);
            
//             for(int j =i+1; j< n; j++){
//                 int numj = nums[j];
//                 int revj = reverseInt(numj);
                
                
//                 if((numi + revj) == (numj +revi)){
//                     count %= MOD;
//                     count ++;
//                 }
                
//             }
            
//         }
        return count % MOD;
    }
};