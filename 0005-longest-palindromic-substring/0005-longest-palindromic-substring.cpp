class Solution {
    
//     void longestUtil(string s, int index, string &ans){
        
//         for(int i =0; i< s.size();i++){
//             for(int j =s.size()-1; j>i; j--){
            
//             if(isPallindrome(s,i,j)){
//                 string temp=(s.substr(i,j));
//                 ans = temp;
//                 return;
                
//             }
//             }
//         }
//         ans = "";
//         return;
//     }
    
    bool isPallindrome(string &s, int start ,int end){
        while( start <= end){
            if(s[start++] != s[end--])
                return false;
        }
        return true;
    }
    
public:
    string longestPalindrome(string s) {
        string ans;
        int maxLength =0;
        int start = 0;
        int end = s.size();
        if(s.size() <2) return s;
        
        for(int i = 0; i<s.size(); i++){
            for(int j= i; j < s.size(); j++){
                if(isPallindrome(s,i,j)){
                    if(j-i+1 >maxLength){
                        maxLength = j-i+1;
                        start = i;               
                    }
                }
            }
        }
      return s.substr(start,maxLength);
    }
};