class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        vector<long long> left(nums.size(), 0);
        vector<long long> right(nums.size(), 0);
        left[0] = nums[0];
        right[nums.size()-1] = nums[nums.size()-1];
        for(int i = 1; i < nums.size(); i++){
            left[i] = left[i-1] + nums[i];
        }
        for(int i = nums.size()-2; i >= 0; i--)
            right[i] = right[i+1] + nums[i];
        int best = INT_MAX;
        int best_index = -1;
        for(int i = 0; i < nums.size(); i++){
            long long first = left[i] / (i+1);
            long long last = 0;
            if(i != nums.size()-1) last = right[i+1] / (nums.size()-1-i);
            int av_diff = abs(first - last);
            if(av_diff < best){
                best = av_diff;
                best_index = i;
            }
        }
        return best_index;
    }
};
// done