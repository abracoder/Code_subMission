class Solution {
     
    static bool cmp(const string &s1, const string &s2) {
        return s1.length() < s2.length();
    }
public:
    int longestStrChain(vector<string>& words) {
        
        sort ( words.begin(), words.end(), cmp);
        unordered_map<string, int> mpp;
        int ans = INT_MIN;
        
        for( string w : words){
            
            int longest = 0;
            
            for( int i = 0 ; i< w.size(); i++){
                
                string subs = w;
                
                subs.erase(i, 1);
                
                longest = max( longest, mpp[subs]+1);
                
            }
            
            mpp[w] = longest;
            ans = max (ans, longest);
            
        }
        
        return ans;
        
    }
};