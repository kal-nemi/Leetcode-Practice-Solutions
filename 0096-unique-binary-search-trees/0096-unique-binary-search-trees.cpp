class Solution {
public:
    int numTrees(int n) {
        // if(n<=1) return 1;
        int dp[n+1];
        dp[0] = dp[1] = 1;
        
        int res = 0;
        
        for(int i=2; i<=n; i++){
            dp[i] = 0;
            for(int j=0; j<i; j++){
                dp[i] += dp[j] * dp[i-j-1];
            }
            // res += numTrees(i) * numTrees(n-i-1);
        }
        return dp[n];
        
    }
};