// Que Link:- https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        
        int n=s.length();
        stack<char> c;
        for(int i=0;i<n;i++)
        {
            if(i==0 && i!=n-1)
            {
                if(s[i]==']' || s[i]=='}' || s[i]==')')
                {
                    return false;
                    break;
                }else{
                    c.push(s[i]);
                }
            }else if(i==(n-1)){
                if(s[i]=='[' || s[i]=='{' || s[i]=='(')
                {
                    return false;
                }else{
                    if(!c.empty())
                    {
                        if(s[i]==']' && c.top()!='[')
                        {
                            return false;
                            break;
                        }else if(s[i]=='}' && c.top()!='{')
                        {
                            return false;
                            break;
                        }else if(s[i]==')' && c.top()!='(')
                        {
                            return false;
                            break;
                        }else{
                            c.pop();
                        }
                    }else{
                        return false;
                        break;
                    }
                }
            }else{
                
                if(s[i]=='[' || s[i]=='{' || s[i]=='(')
                {
                    c.push(s[i]);
                }else{
                    if(!c.empty())
                    {
                        if(s[i]==']' && c.top()!='[')
                        {
                            return false;
                            break;
                        }else if(s[i]=='}' && c.top()!='{')
                        {
                            return false;
                            break;
                        }else if(s[i]==')' && c.top()!='(')
                        {
                            return false;
                            break;
                        }else{
                            c.pop();
                        }
                    }else{
                        return false;
                        break;
                    }
                }
                  
            }
        }
        
        if(!c.empty())
        return false;
        
        return true;
        
        
    }
};
