class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m= matrix.size(),n=matrix[0].size();
        int dp[m+1][n+1];
        memset(dp,0,sizeof(dp));
        int mx=0;
        for(int i=1 ; i<=m ;i++){
            for(int j=1; j<=n; j++){
                if(matrix[i-1][j-1]=='1'){
                    dp[i][j] = 1+ min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
                    mx=max(mx,dp[i][j]);
                }
            }
        }
        return mx*mx;
    }
};