// Que Link:-https://leetcode.com/problems/first-bad-version/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       
        long long start=1,end=n,min;
        while(start<=end)
        {
            long long mid=(abs(start+end)/2);
            
            if(isBadVersion(mid)==true)
            {
                end=mid-1;
                min=mid;
            }else{
                start=mid+1;
            }
            
        }
        return min;
    }
};
