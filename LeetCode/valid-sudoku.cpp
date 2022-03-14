// Que Link:- https://leetcode.com/problems/valid-sudoku/ 

class Solution {
public:
    
    bool rows(int i, vector<vector<char>> b)
    {
        unordered_map<char,int> r;
        
        for(char k='1';k<='9';k++)
        {
            r[k]=0;
        }
        
        for(int j=0;j<9;j++)
        {
            if(b[i][j]!='.')
            {
                if(r[b[i][j]])
                {
                   return false; 
                }else{
                    r[b[i][j]]=1;
                }
            }
        }
        
        return true;
    }
    
    bool columns(int i, vector<vector<char>> b)
    {
        unordered_map<char,int> c;
        
        for(char k='1';k<='9';k++)
        {
            c[k]=0;
        }
        
        for(int j=0;j<9;j++)
        {
            if(b[j][i]!='.')
            {
                if(c[b[j][i]])
                {
                   return false; 
                }else{
                    c[b[j][i]]=1;
                }
            }
        }
        
        return true;
    }
    
    bool cube(int& j,int i,vector<vector<char>>b)
    {
        unordered_map<char,int> cube;
        
        for(char k='1';k<='9';k++)
        {
            cube[k]=0;
        }
        int d=i-(i%3);
        
        for(int a=d;a<(d+3);a++)
        {
            for(int c=j;c<(j+3);c++)
            {
                if(b[a][c]!='.')
                {
                    if(cube[b[a][c]])
                    {
                        return false;
                    }else{
                        cube[b[a][c]]=1;
                    }
                }
            }
        }
        
        
            
        j=j+3;
        if(j==b.size())
        {
            j=0;
        }
        
            
        return true;    
        
    }
    
    
    bool isValidSudoku(vector<vector<char>>& board) {
        
        int j=0;
        for(int i=0;i<9;i++)
        {
             if(!(rows(i,board) && columns(i,board) && cube(j,i,board)))
             {
                 return false;
             }
        }
        return true;
    }
};
