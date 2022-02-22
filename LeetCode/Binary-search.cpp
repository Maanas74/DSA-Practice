// Que Link:- https://leetcode.com/problems/binary-search/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i,start=0,end=nums.size()-1;
        while(true){
            int mid=abs((end+start)/2);
            
            if(nums[mid]==target)
            {
                return mid;
                break;
            }else{
                
                if(nums[mid]<target)
                {
                    start=mid+1;
                }else{
                    end=mid-1;
                }
            }
            
            if(start>end)
            {
                return -1;
                break;
            }
        }
        
    }
};
