class MinStack {
public:
    vector<int> st;

    MinStack() {
        
    }
    
    void push(int val) {
        st.push_back(val);
    }
    
    void pop() {
        if(st.size() == 0) return;
        st.pop_back();
    }
    
    int top() {
        if(st.size() == 0) return -1;
        return st.back();
    }
    
    int getMin() {
        if(st.size() == 0) return -1;
        return *min_element(st.begin(), st.end());
    }
};
