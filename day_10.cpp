class MinStack {

    /** initialize your data structure here. */
    vector<int> min;
    vector<int> stack;
    public:
    MinStack() {
        
    }
    
    void push(int x) {
        stack.push_back(x);
        if(min.empty()||min.back()>=x)
            min.push_back(x);
    }
    
    void pop() {
        if(stack.back()==min.back())
            min.pop_back();
        
        stack.pop_back();
    }
    
    int top() {
        if(!stack.empty())
        return stack.back();
        
        return -1;
    }
    
    int getMin() {
        if(!min.empty())
        return min.back();
        
        return -1;
    }
};
