class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int tot=n*(n+1)/2;
        for(int i=0;i<n;i++){
            tot-=nums[i];
        }
        return tot;
    }
};

         // or
/*
       int ans=0;
        sort(nums.begin(),nums.end());
         nums.push_back(0);
        int n=nums.size()+1;
        for(int i=0;i<n;i++){
            if(i==nums[i]){
                continue;
            }
            else{
                ans=i;
                break;
            }
        }
        return ans;
        */
