class Solution {
public:
    
    void util(int index, string s, vector<vector<string>> &res, vector<string> &path){
        
        
        if(index == s.size()){
            res.push_back(path);
            return;
        }
        
    
        
        for(int i= index;i<s.size(); i++){
            if(isPallindrome(s,index,i)){
                path.push_back(s.substr(index,i-(index-1)));
                util(i+1,s,res,path);
                path.pop_back();
            }
        }
    }
                               
      bool isPallindrome(string s, int index, int i){
          while(index <= i){
              if(s[index++] != s[i--] )
                  return false;
          }
          return true;
      }      
    
    
    
    vector<vector<string>> partition(string s) {
        
        vector<vector<string>> res;
        vector<string> path;
        
        util(0,s, res, path);
        return res;
        
    }
};