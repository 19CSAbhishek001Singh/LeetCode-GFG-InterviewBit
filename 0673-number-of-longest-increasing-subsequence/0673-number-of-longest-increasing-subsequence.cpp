class Solution {
public:
    int findNumberOfLIS(vector<int>& arr) {
    int n = arr.size();
    vector<int> dp(n,1);
    vector<int> ct(n,1);
    int maxi = 1;
    for(int i=0; i<n; i++){
        for(int prev = 0; prev <i; prev++){
            if(arr[prev]<arr[i] && dp[prev]+1>dp[i]){
                dp[i] = dp[prev]+1;
                //inherit
                ct[i] = ct[prev];
            }
            else if(arr[prev]<arr[i] && dp[prev]+1==dp[i]){
                //increase the count
                ct[i] = ct[i] + ct[prev];
            }
        }
         maxi = max(maxi,dp[i]);
    }
    
    int nos =0;
    for(int i=0; i<=n-1; i++){
       if(dp[i]==maxi) nos+=ct[i];
    }
    
    return nos;
    }
};