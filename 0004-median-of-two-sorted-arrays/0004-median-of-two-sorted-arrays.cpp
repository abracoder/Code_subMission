class Solution {
    
    int getMin(int &p1, int &p2, int n, int m, vector<int> & nums1, vector<int> & nums2){
        if(p1 < n && p2 < m){
            return nums1[p1] < nums2[p2] ? nums1[p1++] : nums2[p2++];
            
        }
        else if(p1 < n){
            return nums1[p1++];
            
        }
        else if(p2 < m){
            return nums2[p2++];
            
        }
        
        return -1;
        
    }
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int p1 = 0,p2 =0;
        int n = nums1.size();
        int m = nums2.size();
        double oddMedian =0, evenMedian =0;
        
        if((m+n)%2 ==0){
            for(int  i = 0;i<(m+n)/2 -1; i++){
                int temp = getMin(p1,p2,n,m,nums1,nums2);
            }
            return (double) (getMin(p1,p2,n,m,nums1,nums2) + getMin(p1,p2,n,m,nums1,nums2))/2;
        }
        
        else{
            for(int i =0; i<(m+n)/2;i++){
                int _ = getMin(p1,p2,n,m,nums1,nums2);
            }
            return getMin(p1,p2,n,m,nums1,nums2);
        }
        
        return -1;
    }
};