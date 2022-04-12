int atmostk(vector<int>& nums,int k){
    int right=0;
    int left=0;
    int count=0;
    unordered_map<int,int> um;
    while(right<nums.size()){
        if(um.find(nums[right])==um.end()){
            um[nums[right]]=1;
        }
        else{
            um[nums[right]]++;
        }
        while(um.size()>k){
            um[nums[left]]--;
            if(um[nums[left]]==0){
                um.erase(nums[left]);
            }
            left++;
        }
        count+=right-left+1;
        right++;
    }
    return count;
}
class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
// subarray with atmost k different intergers - subarray with 
// exact k-1 different integers subarray will give us subarray with 
// exact k integers
        return atmostk(nums,k)-atmostk(nums,k-1);
    }
};