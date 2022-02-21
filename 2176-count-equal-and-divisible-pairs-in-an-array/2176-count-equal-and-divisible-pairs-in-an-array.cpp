class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int i,j,n;
        n=nums.size();int ans=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(nums[i]==nums[j]&&(i*j)%k==0) ans++;
            }
        }
        return ans;
    }
};