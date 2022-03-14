// Que Link:- https://leetcode.com/problems/reshape-the-matrix/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int m=mat.size(),n=mat[0].size();
        
        if(m*n != r*c)
        {
            return mat;
        }else{
            
            vector<int> d;
            
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    d.push_back(mat[i][j]);
                }
            }
            
            vector<vector<int>> a;
            int z=0;
            
            for(int i=0;i<r;i++)
            {
                vector<int> b;
                for(int j=0;j<c;j++)
                {
                    b.push_back(d[z]);
                    z++;
                }
                a.push_back(b);
            }
            
            return a;
            
        }
        
    }
};
