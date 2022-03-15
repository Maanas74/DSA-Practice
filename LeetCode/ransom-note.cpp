// Que Link:- https://leetcode.com/problems/ransom-note/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char,int> a;
        
        if(ransomNote.length()>magazine.length())
        {
            return false;
        }
        
        for(int i=0;i<ransomNote.length();i++)
        {
            a[ransomNote[i]]++;
        }
        
        for(int i=0;i<magazine.length();i++)
        {
            a[magazine[i]]--;
        }
        
        for(int i=0;i<ransomNote.length();i++)
        {
            if(a[ransomNote[i]]>0)
                return false;
        }
        
        return true;
        
    }
};
