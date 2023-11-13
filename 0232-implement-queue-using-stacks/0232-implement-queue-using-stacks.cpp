class MyQueue {
    
    stack<int> st1;
    stack<int> st2;
    
    void check(stack<int> &st1, stack<int> &st2){
        if(st1.empty() && st2.empty()) return;
        
       if(st2.empty()){
           while(!st1.empty()){
            int el = st1.top();
            st1.pop();
            st2.push(el);
       }
    }
    }
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
        check(st1,st2);
        
    }
    
    int pop() {
        check(st1,st2);
        int el =  st2.top();
        st2.pop();
        return el;
        
        
    }
    
    int peek() {
        check(st1,st2);
        return st2.top();
        
    }
    
    bool empty() {
        check(st1,st2);
        
        return st2.empty();
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */