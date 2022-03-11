// Que Link:- https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> h;
        
        for(int i=0;i<n;i++)
        {
            int e=target-nums[i];
            if(h.count(e))
            {
                return {h[e],i};
            }else{
                h[nums[i]]=i;
            }
        }
        
        
        return {};
    }
};
