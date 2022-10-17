class Solution {
public:
    int findMaxK(vector<int>& nums) {
        /*
        int n=nums.size();
        int maxi=-1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((nums[i]==-nums[j])||(-nums[i]==nums[j])){
                    maxi=max(abs(nums[i]),maxi);
                }
            }
        }
        return maxi;
        */
       sort(nums.begin(), nums.end());
        int low=0,high=nums.size()-1;
        int maxi = -1;
        while(low < high){
            if((nums[low]+nums[high])== 0){
                maxi = max(maxi, nums[high]);
                low++, high--;
            }
            else if((nums[low]+nums[high])<0){
                low++;
            }
            else{
                high--;
            }
        }
        return maxi;
    }
};