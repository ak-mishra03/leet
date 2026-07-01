class MinStack {
  public:
    stack<int> st;
    int mi;
    MinStack() {

    }

    void push(int value) {
      if(st.empty()){
        mi = value;
        st.push(value);
        return;
      }

      if(value>mi){
        st.push(value);
        return;
      } else {
        st.push(2*value-mi);
        mi = value;
        return;
      }
    }

    void pop() {
      if(st.empty()) return;
      
      int x = st.top();
      st.pop();
      if(x>mi){
        mi = 2*mi -x;
      } 
      return;
    }

    int top() {
      int x = st.top();
      if(x<mi){
        return mi;
      }
      return x;
    }

    int getMin() {
      return mi;
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
