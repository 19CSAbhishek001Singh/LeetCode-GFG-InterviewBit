class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                nums[i]=-1;
            }
        }
        unordered_map<int,int> um;
        int maxi=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==0){
                maxi=i+1;
            }
            else{
                if(um.find(sum)!=um.end()){
                   maxi=max(maxi,i-um[sum]); 
                }
                else{
                um[sum]=i;
                }
            }
        }
        return maxi;
    }
};