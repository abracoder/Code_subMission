class Solution {
    
    void reverse(string temp,string &result){
        // int left = 0;
        int right = temp.size()-1;
        for (int i = right; i>=0;i--){
            result.push_back(temp[i]);
        }
    }
    
    
public:
    string reverseWords(string s) {
        string temp ="";
        string result="";
        
        for ( auto it :s){
            if(it == ' '){
                reverse(temp,result);
                result.push_back(' ');
                temp = "";
                continue;
            }
                
                
            temp.push_back(it);
            
            
            
        }
        
        reverse(temp,result);
        
        
        return result;
        
        
        
    }
};