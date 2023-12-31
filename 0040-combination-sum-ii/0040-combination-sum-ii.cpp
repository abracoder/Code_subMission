class Solution {
void solve(int ind,int target,vector<int>& arr,vector<vector<int>> &ans,vector<int> ds){
  // if(target < 0)
  if (target == 0) {
    ans.push_back(ds);
    return;
  }
  for (int i = ind; i < arr.size(); i++) {
    if (i > ind && arr[i] == arr[i - 1]) continue;
    if(arr[i] > target) break;
    ds.push_back(arr[i]);
    solve(i + 1, target - arr[i], arr, ans, ds);
    ds.pop_back();
  }
    
}
  
    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector <int> temp;
        sort(candidates.begin(),candidates.end());

        solve(0,target,candidates, result,temp);
        return result;
    }
};