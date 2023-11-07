class Solution {
    int calLength(vector<int>&a, vector<int>&b){
        
       return (a[0]-b[0])*(a[0]-b[0]) + (a[1]-b[1])*(a[1]-b[1]);
    }
    
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        
     unordered_set<int> s({calLength(p1,p2),calLength(p1,p3),calLength(p1,p4),calLength(p2,p3),calLength(p2,p4),calLength(p3,p4)});
        
        return !s.count(0) && s.size() ==2;
        
    }
};