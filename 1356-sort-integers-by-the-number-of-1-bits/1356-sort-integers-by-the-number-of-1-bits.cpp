class Solution {
    int countBits(int num){
        int count = 0;
        
        while(num){
            if(num&1) count ++;
            num >>= 1;
        }
        return count;
    }
    
    static bool compare(pair<int,int> &a, pair<int,int> &b){
        if(a.second == b.second)
            return a.first < b.first;
        return a.second < b.second;
    }
    
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> counts;
        vector<int> result;
        
        for(auto it: arr){
            int cnt = countBits(it);
            counts.push_back({it,cnt});
        }
        sort(counts.begin(),counts.end(),compare);     
        
        for(auto it: counts){
            
            result.push_back(it.first);
        }
        
        
        return result;
        
        
    }
};