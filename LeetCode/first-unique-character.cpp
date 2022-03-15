// Que Link:- https://leetcode.com/problems/first-unique-character-in-a-string/

class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char,int> a;
        int n=s.length();
        
        for(int i=0;i<n;i++)
        {
            a[s[i]]++;
        }
        
        for(int i=0;i<n;i++)
        {
            if(a[s[i]]==1)
            {
                return i;
            }
        }
        
        return -1;
        
    }
};
