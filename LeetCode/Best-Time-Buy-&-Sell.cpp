// Que Link:- https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,min=prices[0];
        
        for(int i=1;i<prices.size();i++)
        {
            if(profit<(prices[i]-min))
            {
                profit=prices[i]-min;
            }
            
            if(min>prices[i])
            {
                min=prices[i];
            }
        }
        
        return profit;
        
    }
};
