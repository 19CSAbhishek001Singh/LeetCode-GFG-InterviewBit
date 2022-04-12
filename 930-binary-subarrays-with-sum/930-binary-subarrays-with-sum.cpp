class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> um;
        int n=nums.size();
        int sum=0;
        int count=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum==goal){
                count++;
            }
            if(um.find(sum-goal)!=um.end()){
                count+=um[sum-goal];
            }
            um[sum]++;
        }
        return count;
    }
};