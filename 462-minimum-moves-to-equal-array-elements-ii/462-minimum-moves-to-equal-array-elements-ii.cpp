class Solution {
public:
    int minMoves2(vector<int>& nums) {
       sort(nums.begin(), nums.end());
        int mid = (nums.size()-1)/2;
        int target = nums[mid];
        int ans = 0;
        for(auto i:nums){
            ans += abs(i-target);
        }
        return ans;
    }
};