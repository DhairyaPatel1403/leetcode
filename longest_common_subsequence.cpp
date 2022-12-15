class Solution {
public:

    int dp[1000+1][1000+1];

    int lcsutil(string &text1, string &text2, int m, int n){
        if(m<=0 || n<=0){
            return 0;
        }
        if(dp[m][n] != -1){
            return dp[m][n];
        }
        if(text1[m-1] == text2[n-1]){
            return dp[m][n] = 1 + lcsutil(text1, text2, m-1, n-1);
        }
        else{
            return dp[m][n] = max(lcsutil(text1, text2, m-1, n), lcsutil(text1, text2, m, n-1));
        }
    }
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        
        memset(dp, -1, sizeof(dp));        

        return lcsutil(text1, text2, m, n);
    }
};