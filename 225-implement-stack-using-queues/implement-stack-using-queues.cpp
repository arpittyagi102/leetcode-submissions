class MyStack {
public:
    vector<int> myStack;
    MyStack() {
    }
    
    void push(int x) {
       myStack.push_back(x);
    }
    
    int pop() {
        int popValue = myStack[myStack.size()-1];
        myStack.pop_back();
        return popValue;
    }
    
    int top() {
        return myStack[myStack.size()-1];
    }
    
    bool empty() {
        return myStack.size()==0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */