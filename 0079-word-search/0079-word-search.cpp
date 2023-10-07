class Solution {
    bool searchWord(int row, int col, vector<vector<char>>& board, string word, int index, int n, int m){
        
        if(index == word.length()) return true;
        
        if( row >= n || col >= m || row < 0 || col < 0 || board[row][col] != word[index] || board[row][col] == '!') 
            return false;
        
        
        char c = board[row][col];
        board[row][col] = '!';
        
        bool top = searchWord( row -1, col , board, word, index+1, n, m );
        
        bool down  = searchWord( row +1, col , board, word, index+1, n, m );
        bool left = searchWord( row, col-1 , board, word, index+1, n, m );
        bool right = searchWord( row , col+1 , board, word, index+1, n, m );
        
        board[row][col] = c;
        
        return top || down || left || right;
        
        
    }
    
    
    
    
public:
    bool exist(vector<vector<char>>& board, string word) {
        
        int n = board.size();
        int m  = board[0].size();
        
        int index = 0 ;
        
        
        for(int i =0; i< n; i++){
            for (int j = 0; j < m ; j ++) {
                
                
                if( board[i][j] == word[index]){
                    if(searchWord(i, j, board, word, index , n , m))
                        return true;   
                    
                }
            }
        }
        
        return false;
    }
};