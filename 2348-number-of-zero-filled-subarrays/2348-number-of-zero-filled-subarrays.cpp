class Solution {
public:
/* 
if continuous '0' is 1 then count 1
if continuous '0' is 2 then count 2+1 = 3
if continuous '0' is 3 then count 3+2+1 = 6
if continuous '0' is n then count n+(n-1)+(n-2)+...+3+2+1
*/
    long long zeroFilledSubarray(vector<int>& nums) {
       long long count = 0;
        long long ans = 0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]==0) {
                count++;
                ans += count;
            }
            else {
                count = 0;
            }
        }
        return ans;
    }
};