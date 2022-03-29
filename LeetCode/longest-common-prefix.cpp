// Que Link:- https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size()==1)
        {
            return strs[0];
        }
        
        string s="";
        int n=strs[0].length(), m= strs[1].length();
        
        if(n<m)
        {
            for(int i=0;i<n;i++)
            {
                if(strs[0][i]==strs[1][i])
                {
                    s+=strs[0][i];
                }else{
                    break;
                }
            }
        }else{
            for(int i=0;i<m;i++)
            {
                if(strs[0][i]==strs[1][i])
                {
                    s+=strs[0][i];
                }else{
                    break;
                }
            }
        }
        
        
        if(s.length()!=0)
        {
            for(int i=2;i<strs.size();i++)
            {
                string d="";
                if(s.length()<strs[i].length())
                {
                    for(int j=0;j<s.length();j++)
                    {
                        if(s[j]==strs[i][j])
                        {
                            d+=s[j];
                        }else{
                            break;
                        }
                    }
                }else{
                    
                    for(int j=0;j<strs[i].length();j++)
                    {
                        if(s[j]==strs[i][j])
                        {
                            d+=s[j];
                        }else{
                            break;
                        }
                    }
                    
                }
                
                if(d.length()!=0)
                {
                    s=d;
                }else{
                    s=d;
                    break;
                }
                
            }
        }
        
        return s;
        
    }
};
