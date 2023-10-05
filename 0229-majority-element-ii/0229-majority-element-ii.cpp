class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        
        
        int cnt1 =0, cnt2 =0;
        
        int el1 = INT_MIN, el2= INT_MIN;
        
        for(auto it : nums){
            if (it == el1) cnt1++;
            else if (it == el2 ) cnt2++;
            
            else if(cnt1 == 0 ){
                el1 = it;
                cnt1++;
            }
            else if (cnt2 == 0 ){
                el2 = it;
                cnt2++;
            }
            
                else {
                cnt1--;
                cnt2--;
            }
        }
        
        cnt1 =0;
        cnt2 =0;
        vector<int> res;
        if(el1 == el2 ) return {el1};
        
        for(auto it: nums){
            if(it == el1)cnt1++;
            if(it == el2 )cnt2++;
        }
        
        
        int mini = (int)n/3 +1;
        
        if(cnt1 >= mini) res.push_back(el1);
        
        if(cnt2 >= mini) res.push_back(el2);
        
        return res;
        
        
    }
};