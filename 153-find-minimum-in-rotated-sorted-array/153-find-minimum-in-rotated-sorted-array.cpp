class Solution {
public:
    int findMin(vector<int>& nums) {
        // int mini=*min_element(nums.begin(),nums.end());
        // return mini;
        
        
        // log n
        int start =0, end=nums.size()-1;
        while(start<end){
            int mid = start + (end-start)/2;
            if(nums[mid] >= nums[start] && nums[mid] >= nums[end]){
                start = mid + 1;
            }else{
                end = mid;
            }
        }
        return nums[start];
    }
};