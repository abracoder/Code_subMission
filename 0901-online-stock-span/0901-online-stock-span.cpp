class StockSpanner {
public:
    
    stack<pair<int,int>> st;
    int cnt;
    StockSpanner() {
        cnt = 0;
        st.push({INT_MAX, 0});
    }
    
    int next(int price) {
        cnt++;
        while(!st.empty() && st.top().first <= price){
            st.pop();
        }
        
        int length = cnt - st.top().second;
        pair<int,int> temp = { price, cnt};
        st.push(temp);

        return length;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */