class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++) {
//             int a = abs(nums[i]) - 1;
            
//             nums[a] = (-1*nums[a]);
            
//             if(nums[a]>0)
//             {
//                 ans.push_back(a+1);
//             }
            if(nums[abs(nums[i])-1]>0){
            nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
            }
            else{
                ans.push_back(abs(nums[i]));
            }
            
            
        }
        
        return ans;

        /*
        map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto x:mp){
            if(x.second>1){
                ans.push_back(x.first);
            }
        }
        return ans;
        */
    }
};