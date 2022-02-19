// Que Link:- https://leetcode.com/problems/shuffle-string/

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,char> a;
        string c="";
        for(int i=0;i<indices.size();i++)
        {
            a.insert({indices[i],s[i]});
        }
        
        for(int i=0;i<s.length();i++)
        {
            c+=a[i];
        }
        return c;
    }
};
