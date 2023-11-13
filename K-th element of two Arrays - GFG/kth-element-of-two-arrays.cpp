//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        
        // vector<int> temp;
        int count = 0;
        int left = 0 ;
        int right = 0;
        int val =0;
        
        while(left < n && right < m){
            if (count == k) break;
            if(arr1[left] < arr2[right]){
                // temp.push_back(arr1[left]);
                // left++;
                count ++;
                val = arr1[left++];
            }
            else {
                // temp.push_back(arr2[right++]);
                val = arr2[right++];
                count++;
            }
        }
        
        if (count == k) return val;
        
        while(left < n && count != k){
            // temp.push_back(arr1[left++]);
            val = arr1[left++];
            count++;
        }
        
        while(right < m && count != k){
            // temp.push_back(arr2[right++]);/
            val = arr2[right++];
            count++;
        }
        
        
        return val;
        
    }
};

//{ Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}
// } Driver Code Ends