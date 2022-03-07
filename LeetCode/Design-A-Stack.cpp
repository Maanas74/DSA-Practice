// Que Link:- https://leetcode.com/problems/design-a-stack-with-increment-operation/

class CustomStack {
    int* arr;
    int Top;
    int size;
public:
    CustomStack(int maxSize) {
        arr = new int[maxSize];
        size=maxSize;
        Top=-1;
    }
    
    void push(int x) {
        if(Top!=(size-1))
        {
            Top++;
            arr[Top]=x;
        }
    }
    
    int pop() {
        if(Top==-1)
        {
            return -1;
        }else{
            Top--;
            return arr[Top+1]; 
        }
    }
    
    void increment(int k, int val) {
        stack<int> a;
        
        while(Top>-1)
        {
            a.push(arr[Top]);
            Top--;
        }
        
        while(k-- && !a.empty())
        {
            push(a.top()+val);
            a.pop();
        }
        
        while(!a.empty())
        {
            push(a.top());
            a.pop();
        }
        
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
