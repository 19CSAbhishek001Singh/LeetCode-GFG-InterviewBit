class Solution {
public:
    int dp[6000][2];
    int rec(int ind,int buy,vector<int> &prices){
        int n=prices.size(),profit=0;
        if(ind>=n) return 0;
        if(dp[ind][buy]!=-1) return dp[ind][buy];

        if(buy==0){
        profit+=max({
            -prices[ind]+rec(ind+1,1,prices),
            0+rec(ind+1,0,prices)
        });
        }
        if(buy==1){
            profit+=max({
                prices[ind]+rec(ind+2,0,prices),
                0+rec(ind+1,1,prices)
            });
        }
        return dp[ind][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        return rec(0,0,prices);
    }
};