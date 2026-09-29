class MinStack {
private:
    stack<int> m_stack;
    stack<int> m_minStack;
public:
    MinStack() {}
    
    void push(int val) {
        if (m_minStack.empty() || val < m_minStack.top())
            m_minStack.push(val);
        else
            m_minStack.push(m_minStack.top());

        m_stack.push(val);
    }
    
    void pop() {
        m_stack.pop();
        m_minStack.pop();
    }
    
    int top() {
        return m_stack.top();
    }
    
    int getMin() {
        return m_minStack.top();
    }
};
