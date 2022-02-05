class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> s;
        int n=nums.size();
        for(auto it: nums){
            s[it]++;
        }
        int ans;
        for(auto it:s){
            if(it.second>n/2){
                ans = it.first;
            }
        }
        return ans;
    }
};