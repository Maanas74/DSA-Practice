// Que Link:- https://leetcode.com/problems/search-insert-position/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        long long start=0,end=nums.size()-1;
        while(start<=end)
        {
            long long mid = (abs(start+end)/2);
            
            if(nums[mid]==target)
            {
                return mid;
            }else{
                if(nums[mid]<target)
                {
                    start=mid+1;
                }else{
                    end=mid-1;
                }
            }
        }
        
        return start;
        
    }
};
