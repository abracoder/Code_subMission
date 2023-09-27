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
        
        vector<int > temp(n+1);
        temp[0]=0;
        
//         for (int i =0;i<=n ; i++){
// //             Time Complexity = O ( NlogN)
//             int count = countNoOfBits(i);
            
//             temp.push_back( count);
//         }
        for(int i= 1; i<=n;i++ ){
            temp[i] = temp[i/2] +i%2;
        }
        
        return temp;
    }
};