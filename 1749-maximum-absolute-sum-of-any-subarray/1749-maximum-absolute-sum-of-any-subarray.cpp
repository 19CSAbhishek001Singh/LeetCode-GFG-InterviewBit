class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        
        // maximum subarray sum or max kadane's
        int sum1=0;
        int ans=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum1=sum1+nums[i];
            if(sum1<0){
                sum1=0;
            }
            ans=max(ans,sum1);
        }
        
        // minimum subarray sum or min kadane's
        int sum2=0;
        int ans2=INT_MAX;
        for(int i=0;i<n;i++){
            sum2=sum2+nums[i];
            if(sum2>=0){
                sum2=0;
            }
            ans2=min(ans2,sum2);
        }
        // to get absolute sum of any subarray
        return max(ans,abs(ans2)); 
    }
};