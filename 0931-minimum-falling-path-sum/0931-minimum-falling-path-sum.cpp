class Solution {
public:
   int countPath(int i,int j,int n,vector<vector<int>>& matrix,vector<vector<int>>&dp){
        if(j<0 || j>=n || i>=n) return 1e9;
      if(i==n-1) return matrix[i][j];
      if(dp[i][j]!=-1) return dp[i][j];

      return dp[i][j]=min({
          matrix[i][j]+countPath(i+1,j-1,n,matrix,dp),
          matrix[i][j]+countPath(i+1,j,n,matrix,dp),
          matrix[i][j]+countPath(i+1,j+1,n,matrix,dp)
      });

    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        int i=0,ans=INT_MAX;
        for(int j=0;j<n;j++){
         ans=min(ans,countPath(0,j,n,matrix,dp));
        }
        return ans;
    }
};