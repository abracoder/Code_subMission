class Solution {

    
    
public:
    int countHomogenous(string s) {
        int n = s.size();
        int ans = 0;
        int currStreak =0;
        
        int mod = 1e9+7;
        
        for(int i =0; i<n; i++){
            if(i == 0 || s[i] == s[i-1] ){
                currStreak++;
            }
            else{
                currStreak =1;
            }
            
            ans += currStreak;
            ans %= mod;
        }
        return ans;
       
    }
};