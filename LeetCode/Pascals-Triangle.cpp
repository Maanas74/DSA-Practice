// Que Link:- https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> a;
        
        for(int i=0;i<numRows;i++)
        {
            vector<int> b;
            for(int j=0;j<i+1;j++)
            {
                if(j==0 || j==i)
                {
                    b.push_back(1);
                }else{
                    int sum=a[i-1][j-1]+a[i-1][j];
                    b.push_back(sum);
                }
            }
            a.push_back(b);
        }
        
        return a;
        
    }
};
