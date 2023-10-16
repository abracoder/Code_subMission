class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<int> result(rowIndex+1);
        result[0]=1;
        result[rowIndex] = 1;
        
        long long temp = 1;
        int up = rowIndex;
        int down = 1;
        
        for(int i =1; i<rowIndex ; i++){
            temp = (temp*up)/down;
            result[i] = temp;
            up--;
            down++;
            
            
        }
        return result;
    }
};