// Que Link:- https://leetcode.com/problems/goal-parser-interpretation/

class Solution {
public:
    string interpret(string command) {
        string a="";
        
        for(int i=0;i<command.length();i++)
        {
            if(command[i]=='G')
            {
                a+="G";
            }else if(command[i]=='('){
                
                if(command[i+1]==')')
                {
                    a+="o";
                    i++;
                }else{
                    a+="al";
                    i=i+3;
                }
            }
        }
        return a;
    }
};
