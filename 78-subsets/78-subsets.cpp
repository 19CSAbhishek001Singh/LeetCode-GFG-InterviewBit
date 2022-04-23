class Solution {
public:
    void printf(int ind,vector<int>&ds,vector<int>&nums,vector<vector<int>>&ans){
        if(ind==nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[ind]);
        printf(ind+1,ds,nums,ans);
        ds.pop_back();
        printf(ind+1,ds,nums,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        printf(0,ds,nums,ans);
        return ans;
    }
};