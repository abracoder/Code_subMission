class Solution {
    
    vector<int> nextGreaterRight(vector<int> &height){
        stack<int> st;
        vector<int> right;
        for(int i = height.size()-1; i>= 0;i--){
            
            while(!st.empty() && st.top() <= height[i]){
                st.pop();
            }
            if(st.empty()){
                right.push_back(0);
                    
            }
            else right.push_back(st.top());
            st.push(height[i]);
            
        }
        reverse(right.begin(),right.end());
        return right;
    }
    
    vector<int> nextGreaterLeft(vector<int> &height){
        stack<int> st;
        vector<int> left;
        for(int i = 0; i<height.size();i++){
            
            while(!st.empty() && st.top() <= height[i]){
                st.pop();
            }
            if(st.empty()){
                left.push_back(0);
                    
            }
            else left.push_back(st.top());
            st.push(height[i]);
            
        }
        return left;
    }
    
    void print(vector<int>  arr){
        for(auto it : arr){
            cout << it << "  ";
        }
        cout << endl;
        
    }
public:
    int trap(vector<int>& height) {
        
        vector<int> left = height;
        vector<int> right = height;
        int n =height.size();
        int x = 0;
        for(int i = 0 ; i< n; i++){
            x = max(left[i], x);
            left[i] = x;
        }
        x = 0;
        for(int i = n-1 ; i>=0; i--){
            x = max(right[i], x);
            right[i] = x;
        }
        // print(left);
        // print(right);
        
        int trappedWater = 0;
        
        for(int i = 0; i < n; i++ ){
            
            trappedWater += ((min(left[i],right[i]) - height[i]));
        }
        
        return trappedWater;
        
        
        
    }
};