// Que Link:- https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum=nums[0],max=nums[0];
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>=(sum+nums[i]))
            {
                sum=nums[i];
            }else{
                sum+=nums[i];
            }
            
            if(max<sum)
            {
                max=sum;
            }
            
        }
        
        return max;
        
    }
};
