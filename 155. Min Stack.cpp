class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> s;
    stack<int> s2;
    
    void push(int x) {
        if(s.empty()){
            s.push(x);
            s2.push(x);
        }
        else{
            if(x<=s2.top()) s2.push(x);
            s.push(x);
        }
    }
    
    void pop() {
        if(s2.top()==s.top()) s2.pop();
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return s2.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
