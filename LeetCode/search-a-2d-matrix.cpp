// Que Link:- https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
        
    bool search(vector<vector<int>>& matrix,int target,int i)
    {
                int start=0,end=matrix[0].size()-1;
                int mid=(start+end)/2;
                bool flag=false;
                while(start<=end)
                {
                    if(target==matrix[i][mid])
                    {
                        flag=true;
                        break;
                    }
                            
                    if(matrix[i][mid]>target)
                    {
                        end=mid-1;
                        mid=(start+end)/2;
                    }else{
                        start=mid+1;
                        mid=(start+end)/2;
                    }
                            
                }
                        
                if(flag)
                {
                    return true;
                 }else{
                    return false;
                }
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m=matrix.size(),n=matrix[0].size(),i=0;
        
        while(true)
        {
            if(matrix[i][0]<=target)
            {
                if(i<(m-1))
                {
                    if(matrix[i+1][0]>target)
                    {
                        if(search(matrix,target,i))
                        {
                            return true;
                        }else{
                            return false;
                        }
                        
                    }else{
                        i++;
                    }
                }else{
                        if(search(matrix,target,i))
                        {
                            return true;
                        }else{
                            return false;
                        }
                }
                
            }else{
                return false;
            }
        }
        
    }
};
