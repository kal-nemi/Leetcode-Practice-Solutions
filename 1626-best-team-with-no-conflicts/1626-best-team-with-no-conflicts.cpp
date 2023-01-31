class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n = scores.size();
        vector<vector<int>> v;
        for(int i=0; i<n; i++){
            v.push_back({-ages[i],-scores[i]}); // sort in decreasing order of the ages hence making negative
        }
        
        sort(v.begin(),v.end());
        
        int dp[n];
        memset(dp,0,sizeof dp);
        int ans = 0;
        
        for(int i=0; i<n; i++){
            for(int j=i; j>=0 ; j--){
                if(-v[i][1] <= -v[j][1])
                    dp[i] = max(dp[i],dp[j] - v[i][1]);
            }
            ans = max(ans,dp[i]);
        }
        return ans;
    }
};