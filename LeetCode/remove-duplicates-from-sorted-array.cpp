// Que Link:- https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n=nums.size(),i=0,j=1;
        
        while(j<nums.size())
        {
            if(nums[i]==nums[j])
            {
                j++;
                n--;
            }else{
                i++;
                nums[i]=nums[j];
                j++;
            }
        }
        
        return n;
        
    }
};
