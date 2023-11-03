class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
    
        vector<string> result;
        int i=0;
        
        for(int num : target){
            
            while(i<num-1){
                result.push_back("Push");
                result.push_back("Pop");
                i++;
            }
            result.push_back("Push");
            i++;
        }
        
    return result;
    }
};