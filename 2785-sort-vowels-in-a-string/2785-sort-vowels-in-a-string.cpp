class Solution {
    bool isVowel(char v) {
    return (0x208222>>(v&0x1f))&1;
}
public:
    string sortVowels(string s) {
        
        vector<char> ch;
        
        for(auto it: s){
            if(isVowel(it)){
                ch.push_back(it);
            }
        }
        if(ch.size() == 0) return s;
        
        sort(ch.begin(),ch.end());
        int k =0;
        for(int i=0; i< s.size();i++){
            if(isVowel(s[i])){
                s[i] = ch[k++];
            }
                
            
        }
        return s;
        
    }
};