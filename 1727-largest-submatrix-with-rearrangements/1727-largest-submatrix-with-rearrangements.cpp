class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        int ans =0;
        
        vector<vector<int>> cpMatrix =matrix;
        
        for(int i = 0; i< m; i++){
            for(int j = 0 ;j<n; j++){
                
                if(matrix[i][j] !=0 && i > 0){
                    cpMatrix[i][j] += cpMatrix[i-1][j];
                }
            }
            vector<int> currRow = cpMatrix[i];
            sort(currRow.begin(), currRow.end(), greater());
            
            for(int row = 0 ; row < n; row ++){
                ans = max(ans, currRow[row] * (row+1));
            }
            
            
        }
        
        
        
        return ans;
        
        
    }
};