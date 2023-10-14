class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;
        unordered_map<char,char> mp;
        
        mp[')'] ='(';
        mp[']'] ='[';
        mp['}'] ='{';
        
        for(auto it : s){
            
            if(it =='(' || it == '{' || it =='['){
                st.push(it);
                
            }
            else  if(!st.empty()) {
                char ch = st.top();
                if(mp[it] == st.top()){
                    st.pop();
                }
                else return false;
                
                }
            else return 0;
            }
        
        return st.empty()?1:0;
        
    }
};