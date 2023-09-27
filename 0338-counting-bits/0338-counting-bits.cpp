class Solution {
    
    int countNoOfBits(int n){
        
        int count =0;
        
        while(n){
            count += n%2;
            n >>=1;
        }
        
        return count;
        
    }
    
public:
    vector<int> countBits(int n) {
        
        vector<int > temp;
        
        for (int i =0;i<=n ; i++){
            
            int count = countNoOfBits(i);
            
            temp.push_back( count);
        }
        
        
        return temp;
    }
};