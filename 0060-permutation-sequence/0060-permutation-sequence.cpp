class Solution {
    
    void recurUtil(int index, int n, string &s,vector<string> &res){
        
        if(index >=n){
            res.push_back(s);
            return;
        }
      
        
        for(int i =index; i<n; i++){
            swap(s[i],s[index]);
            recurUtil(index+1,n,s,res);
            swap(s[i], s[index]);
        }
        
    }
    
    
public:
    string getPermutation(int n, int k) {
//         string s ="";
        
//         vector<string> res;
//         for(int i =1 ;i<=n ;i++){
//             s.push_back(i +'0');
//         }
        
//         recurUtil(0, n,s,res);
        
//         sort(res.begin(),res.end());
        
//         auto it = res.begin() + (k-1);
//         // return res;
//         return *it;
        
        int fact = 1;
        vector<int> numbers;
        
        for(int i = 1; i<n; i++){
            fact *= i;
            numbers.push_back(i);
            
        }
        numbers.push_back(n);
        string ans = "";
        k = k-1;
        
        while(true){
            ans += to_string(numbers[k/fact]);
            numbers.erase(numbers.begin()+(k/fact));
            if(numbers.size() == 0)break;
            
            k %=fact;
            fact /=numbers.size();
        }
        
        return ans;
        
        
    }
};