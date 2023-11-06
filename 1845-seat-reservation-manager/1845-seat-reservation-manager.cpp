class SeatManager {
    // set<int> lowrank;
    // int lowest;
    priority_queue<int,vector<int>, greater<int>> pq;
    int max_smallest =0;
    public:
    
    SeatManager(int n) {
        // for(int i = 0 ;i<n;i++){
        //     lowrank.insert(i);
        // }
        // pq.push(1);
    }
    
    int reserve() {
        if(pq.empty()) pq.push(++max_smallest);
       int low = pq.top();
        pq.pop();
        
        return low;
    }
    
    void unreserve(int seatNumber) {
        // arr[seatNumber-1] =0;
        pq.push(seatNumber);        
        
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */