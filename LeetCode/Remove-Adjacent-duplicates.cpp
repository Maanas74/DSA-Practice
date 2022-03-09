// Que Link:- https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<int> a,b;
        string d;
        
        for(int i=0;i<s.length();i++)
        {
            
            if(a.empty())
            {
                a.push(s[i]);
            }else{
                
                if(a.top()==s[i])
                {
                    a.pop();
                }else{
                    a.push(s[i]);
                }
                
            }
            
        }
        
        while(!a.empty())
        {
            b.push(a.top());
            a.pop();
        }
        
        while(!b.empty())
        {
            d+=b.top();
            b.pop();
        }
        
        return d;
        
    }
};
