class Solution {
public:
    
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int prev = 0, secPrev = 0;
        for(int i =2; i<=n; i++)
        {
            int oneStep = prev + cost[i-1];
            int twoStep = secPrev + cost[i-2];
            secPrev = prev;
            prev = min(oneStep,twoStep);
            
        }
        return prev;
    }
};