class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
         // vector<int>b(nums);
        // sort(nums.begin(),nums.end());
        // int i=0,n=nums.size();
        // while(i<n and nums[i]==b[i]){
        //     i++;
        // }
        // int j=nums.size()-1;
        // while(j>=0 and nums[j]==b[j]){
        //     j--;
        // }
        // if(i==n)    return 0;
        // return abs(j-i)+1;
        
        
        //O(n)
        if (nums.size() < 2) {
            return 0;
        }
        int minv = INT_MAX,maxv = INT_MIN,start = 0,end = 0;
        for (size_t i = 0; i < nums.size(); ++i) {
            if (nums[i] > maxv) {
                maxv = nums[i];
            }
            if (nums[i] < maxv) {
                end = i;
            } else {
                maxv = nums[i];
            }
        }
        for (int i = nums.size() - 1; i >= 0; --i) {

            if (nums[i] > minv) {
                start = i;
            } else {
                minv = nums[i];
            }
        }
        if (end == start) {
            return 0;
        }
        return end - start + 1;
    }
};