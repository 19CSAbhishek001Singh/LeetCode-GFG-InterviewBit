class Solution {
public:
 int m,n;
    int solve(vector<vector<int>>&grid,vector<vector<int>>&dp,int i,int j){
        if(i==m)
            return j;
        if(dp[i][j]!=101)
            return dp[i][j];
        if(j==0 and grid[i][j]==-1)
            return dp[i][j] = -1;
        if(j==n-1 and grid[i][j]==1)
            return dp[i][j] = -1;
        if(grid[i][j]==1)
        {
            if(grid[i][j+1]==-1)
                return dp[i][j] = -1;
            return dp[i][j] = solve(grid,dp,i+1,j+1);
        }
        if(grid[i][j-1]==1)
            return dp[i][j] = -1;
        return dp[i][j] = solve(grid,dp,i+1,j-1);
    }
    vector<int> findBall(vector<vector<int>>& grid) {
        m = grid.size(), n = grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,101));
        for(int i = 0;i<n;i++)
            solve(grid,dp,0,i);
        return dp[0];
    }
};