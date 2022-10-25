class Solution {
public:
    int rec(int ind,int prev,vector<int>&nums,vector<vector<int>>&dp){
        if(ind==nums.size()) return 0;
        // index range from 0 to n-1
        // prev can range from -1 to n-1 but we cant store -1 in 2d array
        // so coordinate shift to 0 to n
        if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];
        
        int noTake=rec(ind+1,prev,nums,dp);
        int take=0;
        if(prev==-1 || nums[ind]>nums[prev]){
            take=1+rec(ind+1,ind,nums,dp);
        }
        
        return dp[ind][prev+1]=max(take,noTake);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return rec(0,-1,nums,dp);
    }
};