//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    
    long nthRoot(int mid, int n, int m){
        long ans = 1;
        for(int i =1; i<=n ; i++ ){
            if(ans  <= m)
                ans *= mid;
            else 
                break;
        }
        return ans;
    }
    
	public:
	int NthRoot(int n, int m)
	{
	    // Code here.
	    int low = 1;
	    int high = m;
	    
	    while(low <= high){
	        int mid = low + (high-low)/2;
	        
	        long val = nthRoot(mid,n,m);
	       // cout << " mid " << mid ; 
	       // cout << " val " << val << endl;
	        if( val == m) return mid;
	        
	        else if ( val < m) low = mid+1;
	        else high = mid-1;
	        
	    }
	    
	    return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends