class Solution {
public:
    bool isPowerOfFour(int n) {
//         if(n ==1) return true;    
//         int count =0;
//         while(n){
//             if(n & 1) count++;
//             else
//                 n >>=1;
//         }
        
//         cout << count;
        
//        if (count ==1) return true;
//         return false;
        while(n > 1) {
            if(n%4) return false;
            n /= 4;
            
        }
        if(n ==1) return true;
        
        return false;
    }
};