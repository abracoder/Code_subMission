class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int val =0;
        int n =nums.size();
        
        unordered_set <int> intVal;
        for(auto it : nums){
            intVal.insert(stoi(it,0,2));
        }
        
        for(int i = 0 ; i<= n; i++){
            
            if(intVal.find(i) == intVal.end()){
                string ans = bitset<16>(i).to_string();
                return ans.substr(16 - n);
            }
        }
        
      
        return "";
        
    }
};