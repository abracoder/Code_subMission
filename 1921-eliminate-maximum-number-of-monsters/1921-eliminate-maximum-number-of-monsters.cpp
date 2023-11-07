class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int  n = dist.size();
//         set<pair<int,int>> ds;
        vector<double>ds;
        for(int i =0;i<n;i++){
            ds.push_back((double)dist[i]/speed[i]);
        }
        sort(ds.begin(),ds.end());
        int count =0;
        
        
        for( int i =0; i<n;i++){
            if(ds[i] <= i)
                break;
            count++;
        }
        
        return count;
        
//         // sort(ds.begin(),ds.end());
//         int count =0;
        
//         for(int i =0;i<n; i++){
//             cout<<*begin(ds);
//             if(*begin(ds)[0] > 0){
//                 count++;
//                 ds.erase(begin(ds));
//             }
//             else{
//                 break;
//             }
//             for(auto it : ds){
//                 it.first -= it.second;
//             }
            
            
            
//         }
//         return count;
        
        
    }
};