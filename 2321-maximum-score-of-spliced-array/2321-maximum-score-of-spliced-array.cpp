class Solution {
public:
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
	// find the sum of num1 and num2
        long long sum1 = accumulate(nums1.begin(), nums1.end(), 0);
        long long sum2 = accumulate(nums2.begin(), nums2.end(), 0);
        vector<int> v(nums1.size(),0);
        vector<int> v1(nums1.size(),0);
 // store difference of the arrays num1-num2 and num2-num1 in these vectors above
        for(int i = 0; i < nums1.size(); i++){
            v[i] = nums2[i] - nums1[i];
        }
        for(int i = 0; i < nums2.size(); i++){
            v1[i] = nums1[i] - nums2[i];
        }
// Applying kadane's algo on both vectors to find maximum sum contiguous subarray
        int ans = 0, temp = 0;
        for(int i = 0; i < v.size(); i++){
            temp = max(v[i], temp+v[i]);
            ans = max(temp, ans);
        }
        
        temp = 0;
        int ans1 = 0;
        for(int i = 0; i < v.size(); i++){
            temp = max(v1[i], temp+v1[i]);
            ans1 = max(temp, ans1);
        }
        // answer will be sum+max sum subarray
        return max(sum1 + ans, sum2 + ans1);
    }
};