// Que Link:- https://leetcode.com/problems/defanging-an-ip-address/

class Solution {
public:
    string defangIPaddr(string address) {
        string s="";
        
        for(int i=0;i<address.length();i++)
        {
            if(address[i]=='.')
            {
                s+='[';
                s+='.';
                s+=']';
            }else{
                s+=address[i];
            }
        }
        
        return s;
        
    }
};
