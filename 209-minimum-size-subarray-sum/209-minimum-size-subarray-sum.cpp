class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
         int n = nums.size();
        int left = 0; // left pointer
        int right = 0; // right pointer
        int sum = 0; // we will keep adding sum here
        int ans =INT_MAX; // we are going to store the mininum window size from all
        while(right < n){
            sum += nums[right];
            // We will keep adding sum untill it is greater than target
            if(sum >= target){
                // here we are trying to shrink the size of the window
                // to check is window could be made smaller
               while(sum >= target){
                   sum -= nums[left];
                left++;
               }
                ans = min(ans,right-left+2);
                // right - left+2 is done because when the loop will break sum would have been 
                // smaller than target so we need to include the previous index also
              }
            right++;
        }
        if(ans == INT_MAX) return 0;
        return ans;
    }
};