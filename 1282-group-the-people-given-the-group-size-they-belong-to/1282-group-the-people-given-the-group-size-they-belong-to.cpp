class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        
        vector<vector<int>> result;
        int maxi =0;
        unordered_map < int, vector<int> > mpp;
        
        for (int i =0 ; i< groupSizes.size(); ++i){
            mpp[groupSizes[i]].push_back(i);
            maxi = max ( groupSizes[i], maxi);
        }
        // cout << mpp[1][0];
        
        
        for (auto it : mpp){
            
            // cout << it.first;      
            if (it.second.size() == it.first){
                result.push_back (it.second);
            }
            else {
                for (int i =0; i< it.second.size(); i += it.first){
                    vector <int > temp;
                for (int j = i ; j< i+ it.first && j < it.second.size(); j++){
                    temp.push_back( it.second[j]);
                }
                
                    result.push_back(temp);
                }   
            }
        }
        // cout << maxi;
        return result;
        
    }
};