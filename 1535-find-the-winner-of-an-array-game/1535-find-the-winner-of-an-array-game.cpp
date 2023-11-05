class Solution {
public:
    int getWinner(vector<int>& arr, int k) {

        unordered_map<int,int> mp;
        int n = arr.size();
        
        
        for(int i=0; i<n-1; i++){
            
            if(arr[i] > arr[i+1]){
                mp[arr[i]]++;
                if(mp[arr[i]] >= k ) return arr[i];
                swap(arr[i],arr[i+1]);
            }
            else{
                mp[arr[i+1]]++;
                if(mp[arr[i+1]] >= k) return arr[i+1];
                
            }
        }
        int max =0;
        int ans = 0;
        
        
        for( auto it : mp){
            
            if(it.second > max){
                if(it.first > ans){
                    ans = it.first;
                }
            }
            // else if(it.second == max){
            //     ans = max(ans,it.first)
            // }
        }
return ans;
        
    }
};