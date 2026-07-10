class MinStack {
public:
    stack<int> st;
    stack<int> minStack;
    MinStack() {
        
    }
    
    void push(int val) {
        if(minStack.empty()){
            minStack.push(val);
        }
        else{
            minStack.push(min(minStack.top(),val));
        }
        st.push(val);
        
    }
    
    void pop() {
        if(st.empty()){
            return;
        }
        else{
            st.pop();
            minStack.pop();
        }
    
        
    }
    
    int top() {
        return st.top();
        
    }
    
    int getMin() {
        return minStack.top();
        
    }
};
