class Solution {
public:
    // int recur(int n,vector<int> &dp){
    //     if(n<=1) return n;
    //     if(dp[n] != -1) return dp[n];
    //     else return dp[n] = recur(n-1,dp)+recur(n-2,dp);
    // }
    int fib(int n) {
        // vector<int> dp(n+1,-1);
        int prev2 = 0;
        int prev = 1;
        // int dp;
        for(int i=2; i<=n; i++){
           int dp = prev2 + prev;
            prev2 = prev;
            prev = dp;
        }
        if(n>0)
        return prev;
        else return prev2;
        
    }
};