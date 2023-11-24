class Solution {
public:
    int maxCoins(vector<int>& piles) {
        
        sort(piles.begin(),piles.end());
        
        int n = piles.size();
        int noOfTriplet = n/3;
        int ans = 0; 
        int i = n-2;
       while(noOfTriplet){
           ans += piles[i];
            noOfTriplet --;
           i -= 2;
       }
        
        return ans;
        
    }
};