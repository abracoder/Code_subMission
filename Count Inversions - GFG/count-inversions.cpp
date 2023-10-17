//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
  long long int merge(long long arr[], int low, int mid, int high){
      
      long long int left = low;
      long long right = mid+1;
      long long count = 0;
      vector<long long int> temp;
      
      while(left <= mid && right <= high){
          
          if(arr[left] <= arr[right]){
             temp.push_back(arr[left]);
             left++;
          }else{
              temp.push_back(arr[right]);
              count += (mid -left)+1 ;
              right ++;
          }
          
      }
      
      while(left <= mid){
          temp.push_back(arr[left]);
          left++;
      }
      while(right <= high){
          temp.push_back(arr[right]);
          right++;
      }
      
      
      for(int i = low; i<=high; i++){
          arr[i] = temp[i-low];
      }
      return count;
  }
  
  long long int mergeSort(long long arr[],long long low , long long high){
      long long int count = 0;
      if ( low >= high) return 0;
      long long int mid = low+ (high-low)/2;
      count += mergeSort(arr, low, mid);
      count += mergeSort(arr, mid+1, high);
      
      count += merge(arr,low, mid, high);
      
      return count;
      
  }
  
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        
        return mergeSort(arr, 0 , N-1);
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends