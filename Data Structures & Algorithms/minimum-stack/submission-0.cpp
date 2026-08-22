class MinStack {
public:
        vector<int>st;
        vector<int>mini;
        int i;
    MinStack() {
        st.resize(100000);
        mini.resize(100000);
        i=-1;
    }
    
    void push(int value) {
        i++;
        st[i]= value;
        if(i==0) mini[i]=value;
        else mini[i]=min(value,mini[i-1]);

        return;
    }
    
    void pop() {
        i--;
    }
    
    int top() {
        return st[i];
    }
    
    int getMin() {
        return mini[i];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */