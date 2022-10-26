class Solution {
public:
    /* Recursion
    int mD(string word1, string word2,int m, int n){
        if(m==0) return n;
        if(n==0) return m;
        if(word1[m-1]==word2[n-1]) return mD(word1,word2,m-1,n-1);
        else 
            return 1+ min({mD(word1,word2,m,n-1),mD(word1,word2,m-1,n),mD(word1,word2,m-1,n-1)});
    }
    */
    int minDistance(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        // return mD(word1,word2,m,n);
        int dp[m+1][n+1];
        for(int i=0; i<=m; i++){
            dp[i][0] = i;
        }
        for(int j=0; j<=n;j++){
            dp[0][j] = j;
        }
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                if(word1[i-1]==word2[j-1]){
                    dp[i][j]=dp[i-1][j-1];
                }
                else 
                    dp[i][j]= 1+ min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
            }
        }
        return dp[m][n];
    }
};