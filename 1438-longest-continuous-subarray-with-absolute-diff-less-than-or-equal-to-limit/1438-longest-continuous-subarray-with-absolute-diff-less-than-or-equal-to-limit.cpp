class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int longest = 1;
        deque<int> maxDeque; // to store maximum
        deque<int> minDeque; // to store minimum
        int left=0,right=0;
   while(right<nums.size()) {
     // deque is not empty and the current element is maximum remove 
     // remaining less than it to make it maximum
     while (!maxDeque.empty() && nums[maxDeque.back()] <= nums[right]) {
        maxDeque.pop_back();
     }
    maxDeque.push_back(right);
    // deque is not empty and the current element is smaller 
   // than remaining at back so remove them to make it new minimum  
    while (!minDeque.empty() && nums[minDeque.back()] >= nums[right]) {
         minDeque.pop_back();
     }
    minDeque.push_back(right);
    while (nums[maxDeque.front()] - nums[minDeque.front()] > limit) {
        if (left == maxDeque.front()) {
           maxDeque.pop_front();
         }
      if (left == minDeque.front()) {
          minDeque.pop_front();
        }
         ++left;
            }
    longest = max(longest, right - left  + 1);
            right++;
        }
        return longest;
    }
};