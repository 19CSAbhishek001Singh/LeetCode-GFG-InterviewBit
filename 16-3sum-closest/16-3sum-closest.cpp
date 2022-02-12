class Solution {
public:
    int threeSumClosest(vector<int>& nums, int X) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n-2;i++){
            int lo=i+1;
            int hi=n-1;
            while(lo<hi){
               int num = nums[i] + nums[lo] + nums[hi];
                if(abs(num - X) < abs(ans - X)) ans = num;
                if(num < X) lo++;
                else hi--;
        }
        }
        return ans;
    }
};