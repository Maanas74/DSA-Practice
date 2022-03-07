// Que Link:- https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/

class Solution {
public:
    int maxDepth(string s) {
        stack<char> b;
        stack<int> a; 
        int max=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                b.push(s[i]);
                max++;
            }else if(s[i]==')'){
                if(a.empty())
                    a.push(max);
                else
                {
                    if(a.top()<max)
                    {
                        a.push(max);
                    }
                }
                b.pop();
                max--;
            } 
        }
        
        if(!a.empty())
            return a.top();
        else
            return 0;
        
    }
};
