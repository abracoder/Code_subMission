class Solution {
//     bool isPallindrome(string str){
//         int left =0;int right = str.size()-1;
        
//         while(left<=right){
//             if(str[left++] != str[right--]) return false;
//         }
        
//         return true;
//     }
    
public:
    int countPalindromicSubsequence(string s) {
        
        unordered_set <char> uniq;
        
        for(auto ch: s){
            uniq.insert(ch);
        }
        
        int ans =0;
        
        for (auto ch : uniq){
            int i = -1;
            int j =0;
            
            for(int k =0; k<s.size();k++){
                
                if(s[k] == ch){
                    if(i == -1){
                        i =k;
                    }
                    j = k;
                }
            }
            
            
            unordered_set<char> btw;
            
            for(int l = i+1; l<j; l++){
                btw.insert(s[l]);
            }
            
            ans += btw.size();
        }
        
        return ans;
        
    }
};