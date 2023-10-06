class Solution {
public:
    bool winnerOfGame(string colors) {
        
        int cntA = 0;
        int cntB = 0;
        int resultA =0;
        int resultB = 0;
        int n = colors.size();
        
        for( int i = 0 ; i< n; ){{
            cntA =0;
            cntB =0;
            while(i<n &&colors[i] == 'A'){
                cntA++;
                i++;
            }
            if(cntA>=3) resultA += cntA-2;
            
            while(i < n && colors[i] == 'B') {
                cntB++;
                i++;
            }
            if(cntB >= 3) resultB += cntB-2;
            
        }}
        
        
        
        
        return resultA > resultB ? true : 0;
        
    }
};