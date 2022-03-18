// Que Link:- https://leetcode.com/problems/implement-queue-using-stacks/

class MyQueue {
    stack<int> a;
public:
    MyQueue() {
    }
    
    void push(int x) {
        a.push(x);
    }
    
    int pop() {
        stack<int> b;
        while(!a.empty())
        {
            b.push(a.top());
            a.pop();
        }
        
        int c=b.top();
        if(!b.empty())
        {
            b.pop();
            while(!b.empty())
            {
                a.push(b.top());
                b.pop();
            }
        }
        return c;
        
    }
    
    int peek() {
        stack<int> b;
        while(!a.empty())
        {
            b.push(a.top());
            a.pop();
        }
        
        int c=b.top();
        if(!b.empty())
        {
            while(!b.empty())
            {
                a.push(b.top());
                b.pop();
            }
        }
        return c;
        
    }
    
    bool empty() {
        if(a.empty())
        {
            return true;
        }else{
            return false;
        }
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
