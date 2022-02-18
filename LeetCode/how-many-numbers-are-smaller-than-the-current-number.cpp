// Que Link:- https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/submissions/

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> a;
        for(int i=0;i<nums.size();i++)
        {
            int c=0;
            for(int j=0;j<nums.size();j++)
            {
                if(i!=j)
                {
                    if(nums[i]>nums[j])
                    {
                        c++;
                    }
                }
            }
            a.push_back(c);
        }
        return a;
    }
};
