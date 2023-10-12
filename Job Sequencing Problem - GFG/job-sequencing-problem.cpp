//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    
    static bool comp(Job a, Job b){
        
        return a.profit > b.profit;
    }
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        
        
        sort(arr, arr+n, comp);
        int maxi = arr[0].dead;
        
        for(int i =1;i< n ;i++){
            maxi = max( maxi, arr[i].dead);
        }
        int count = 0;
        int profit = 0;
        vector<int>temp(maxi+1,0);
        for( int i = 0 ; i < n ; i++){
            
            if( arr[i].profit > temp[arr[i].dead]){
                temp[arr[i].dead] = arr[i].profit;
            }
            else {
                int currentProfit = arr[i].profit;
               for( int j = arr[i].dead-1; j > 0 ; j--){
                   if( currentProfit > temp[j] ){
                       temp[j] = currentProfit;
                       break;
                      
                   }
               }
                    
            }
            }
            
            for (int i = 1; i < temp.size();i++){
                if(temp[i] != 0){
                    count ++;
                    profit += temp[i];
                }
            }
        
        
        
        return {count, profit};
        
    } 
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends