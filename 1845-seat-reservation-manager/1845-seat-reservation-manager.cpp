class SeatManager {
    vector<int> arr;
    set<int> lowrank;
    int lowest;
    public:
    SeatManager(int n) {
        for(int i = 0 ;i<n;i++){
            lowrank.insert(i);
        }
    }
    
    int reserve() {
       lowest = *begin(lowrank);
        // arr[lowest] =1;
        lowrank.erase(begin(lowrank));
        return lowest+1;
        
    }
    
    void unreserve(int seatNumber) {
        // arr[seatNumber-1] =0;
        lowrank.insert(seatNumber-1);
        
        
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */