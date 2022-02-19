// Que Link:- https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/submissions/

class Solution {
public:
    int numberOfSteps(int num) {
        int c=0;
        
        while(num>0)
        {
            if(num%2==0)
            {
                num=num/2;
            }else{
                num-=1;
            }
            c++;
        }
        return c;
        
    }
};
