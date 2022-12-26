class Solution {
public:
    bool canJump(vector<int>& nums) {
        /*
        int r=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(i>r){
                return false;
            }
            r=max(r,nums[i]+i);
            // cout<<r<<" ";
        }
        return true;
        */
        
        // using dp
        int n= nums.size();
        vector<int> dp(n);
        dp[0]=0+nums[0];
        for(int i=1;i<n;i++){
            if(dp[i-1]<i){
                return false;
            }
            dp[i]=max(dp[i-1],i+nums[i]);
        }
        if(dp[n-1]>=n-1){
            return true;
        }
        else{
            return false;
        }
    }
};