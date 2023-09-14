class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int n = arr.size();
        int total_sum =0;
        int kwindowSum=0;
        for(int i=0; i< n; i++){
            total_sum += arr[i];
            if((i < n-k ))
                kwindowSum += arr[i];
        }
        // cout << kwindowSum << " s";
        int answer = max (0 , total_sum - kwindowSum);
        int j=0;
        for (int i= n-k ; i < n ; i++){
            // cout << "i" << i << " -";
            // cout <<"  - " << answer << " - ";
            // cout << " k" << kwindowSum;
            kwindowSum -= arr[j++];
            kwindowSum += arr[i];
            answer = max (answer, total_sum - kwindowSum);

            
            
            
        }
        
        
       
        return answer;
        
    }
};