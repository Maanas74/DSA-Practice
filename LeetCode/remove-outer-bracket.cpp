// Que Link:- https://leetcode.com/problems/remove-outermost-parentheses/

class Solution {
public:
    string removeOuterParentheses(string s) {
        
        stack<char> a,b;
        string f="";
        
        for(int i=0;i<s.length();i++)
        {
            if(a.empty())
            {
                a.push(s[i]);
            }else{
                
                if(s[i]=='(')
                {
                    b.push(s[i]);
                    f+=s[i];
                }else if(s[i]==')'){
                    if(!b.empty())
                    {
                        b.pop();
                        f+=s[i];
                    }else{
                        a.pop();
                    }
                }
            }
        }
        
        return f;
        
    }
};
