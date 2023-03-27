class Solution {
public:
     int countPaths(int i,int j,int n,int m,vector<vector<int>> &dp,
    vector<vector<int>>& grid){
        if(i==(n-1)&&j==(m-1)) return grid[i][j];
        if(i>=n||j>=m) return 1e9;
        if(dp[i][j]!=-1) return dp[i][j];
     else return dp[i][j]=min({grid[i][j]+countPaths(i+1,j,n,m,dp,grid),
     grid[i][j]+countPaths(i,j+1,n,m,dp,grid)});
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
         if(m==1&&n==1)
         return grid[0][0];
         vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
         return countPaths(0,0,m,n,dp,grid);
    }
};