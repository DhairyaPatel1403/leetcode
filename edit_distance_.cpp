class Solution {
public:
    int dp[1000+1][1000+1];
    int eddp(string &w1, string &w2, int m, int n){
        if(dp[m][n] != -1){
            return dp[m][n];
        }
        if(m==0){
            return dp[m][n] = n;
        }
        if(n==0){
            return dp[m][n] = m;
        }
        if(w1[m-1] == w2[n-1]){
            return dp[m][n] = eddp(w1, w2, m-1, n-1);
        }
        return dp[m][n] = 1 + min(min(eddp(w1, w2, m-1, n), eddp(w1, w2, m, n-1)), eddp(w1, w2, m-1, n-1));
    }

    int minDistance(string word1, string word2) {
        memset(dp,-1,sizeof(dp));
        return eddp(word1, word2, word1.size(), word2.size());
    }
};