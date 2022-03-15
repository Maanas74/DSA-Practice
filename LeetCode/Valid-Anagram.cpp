// Que Link:- https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length()!=t.length())
        {
            return false;
        }
        unordered_map<char,long long int> a,b;
        
        
        
        for(long long int i=0;i<s.length();i++)
        {
            a[s[i]]++;
            b[t[i]]++;
        }
        
        for(long long int i=0;i<t.length();i++)
        {
            if(a[t[i]]!=b[t[i]])
            {
                return false;
            }
        }
        
        return true;
        
    }
};
