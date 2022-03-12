// Que Link:- https://leetcode.com/problems/intersection-of-two-arrays-ii/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> a;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        int n=nums1.size(),m=nums2.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(nums1[i]==nums2[j])
                {
                    a.push_back(nums1[i]);
                    nums1[i]=-1;
                    nums2[j]=-1;
                    break;
                }
            }
            
        }
        
        return a;
        
    }
};
