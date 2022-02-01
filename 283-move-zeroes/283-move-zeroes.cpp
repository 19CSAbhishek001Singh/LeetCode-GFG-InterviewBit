class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left=0;
        int right=0;
        for(int i=0;i<nums.size();i++){
            if(nums[right]==0){
                right++;
                continue;
            }
            else{
                swap(nums[left++],nums[right++]);
            }
        }
    }
};