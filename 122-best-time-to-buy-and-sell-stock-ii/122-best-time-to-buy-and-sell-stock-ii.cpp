class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profitMax = 0,profit=0;
    
        
        
        int curr=0;
        for(int i=1; i<n; i++)
        {
            // minPrice = min(prices[i],minPrice);
            if(prices[i-1]<prices[i])
            {
                profit += (prices[i]-prices[i-1]);
            }
            // profitMax = max(profitMax,prices[i]-minPrice);
            
        }
        // cout<<profit;
        // int p = max(profit,profitMax);
        return profit;
        
    }
};