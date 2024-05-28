class MyStack {
public:
    queue<int> que;

    MyStack() {}
    
    void push(int x) {
        que.push(x);

        for(int i=0; i<que.size()-1; i++){
            que.push(que.front());
            que.pop();
        }
    }
    
    int pop() {
        int popResult = que.front();
        que.pop();

        return popResult;
    }
    
    int top() {
        return que.front();
    }
    
    bool empty() {
        return que.empty();
    }
};