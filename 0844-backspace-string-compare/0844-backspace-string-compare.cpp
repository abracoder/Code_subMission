class Solution {
    string stringUtil(string s, int n)
    {   stack<char> st;
        
        for(auto it : s){
            if(it !='#')
                st.push(it);
            else if(!st.empty())
                st.pop();
            
        }
        string res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        
     return res;
    }
    
    
public:
    bool backspaceCompare(string s, string t) {
        string s1 = stringUtil(s,s.size());
        string t1 = stringUtil(t,t.size());
        
        if(s1 == t1) return true;
        
        return false;
        
        
    }
};