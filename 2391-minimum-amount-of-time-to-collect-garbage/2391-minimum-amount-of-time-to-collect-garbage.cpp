class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
//         int totalM =0, totalP= 0, totalG=0;
        
        
//         for (int i = 0 ; i< garbage.size(); i++){
            
//             for(auto it : garbage[i] ){
//                 if(it == 'M' ){
//                     totalM += 1;
//                     if(i != 0){
//                         totalM += travel[i-1];
//                     }
//                 }
                    
//                 else if(it == 'P'){
//                     totalP ++;
//                     if(i != 0){
//                         totalP += travel[i-1];
//                     }
//                 }
//                 else {
//                     totalG ++;
//                     if(i != 0){
//                         totalG += travel[i-1];
//                     }
//                 }
                
                
                
//             }
           
        // }
        // cout << totalM << ' ' << totalP << ' ' << totalG<<endl;
        
        // return totalM+totalP+totalG;
        
        
        vector<int> prefixSum(travel.size()+1,0);
        
        
        prefixSum[1] = travel[0];
        for(int i =1; i< travel.size();i++){
            prefixSum[i+1] = prefixSum[i] + travel[i];
        }
        
        
        unordered_map<char,int> garbageLastPos;
        
        unordered_map<char,int> garbageCount;
        
        for(int i=0; i< garbage.size(); i++){
            for(char c : garbage[i]){
                garbageLastPos[c]  =i;
                garbageCount[c]++;
            }
        }
        
        
        char garbageTypes[3] = { 'M','P','G'};
        
        
        int ans =0;
        
        
        for(char c : garbageTypes){
            if(garbageCount[c]){
                ans += prefixSum[garbageLastPos[c]]+ garbageCount[c];
            }
        }
        
        return ans;
    }
};