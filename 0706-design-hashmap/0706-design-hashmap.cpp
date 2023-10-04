class MyHashMap {
    
    int hashMap[10000005];
public:
    MyHashMap() {
        for(int i = 0;i< 10000005; ++i){
            hashMap[i] = INT_MIN +1;
        }
    }
    
    void put(int key, int value) {
        hashMap[key] = value;
    }
    
    int get(int key) {
        
        if(hashMap[key] == INT_MIN +1) return -1;
        return hashMap[key];
        
    }
    
    void remove(int key) {
        hashMap[key] = INT_MIN+1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */