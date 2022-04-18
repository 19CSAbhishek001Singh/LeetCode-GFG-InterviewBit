class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int close=INT_MAX;
        int ans;
        for(int i=0;i<nums.size();i++){
            if(abs(nums[i])<=close){
                close=abs(nums[i]);
                ans=nums[i];
            }
        }
        return ans;
    }
};