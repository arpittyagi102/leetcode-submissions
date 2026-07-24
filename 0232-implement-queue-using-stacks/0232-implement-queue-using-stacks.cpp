class MyQueue {
    stack<int> enqueue;
    stack<int> dequeue;

    void transfer() {
        while (!enqueue.empty()) {
            dequeue.push(enqueue.top());
            enqueue.pop();
        }
    }

public:
    MyQueue() {}

    void push(int x) { enqueue.push(x); }

    int pop() {
        int n = peek();
        dequeue.pop();
        return n;
    }

    int peek() {
        if (dequeue.empty()) {
            transfer();
        }

        int n = dequeue.top();
        return n;
    }

    bool empty() {
        return enqueue.empty() && dequeue.empty();
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