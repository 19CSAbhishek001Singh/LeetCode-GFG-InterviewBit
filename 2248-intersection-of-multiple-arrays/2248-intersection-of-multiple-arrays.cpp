class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int n=nums.size();
        map<int,int> m;
        vector<int> v;
        for(auto it:nums){
            for(auto x:it){
                m[x]++;
            }
        }
        for(auto i:m){
            if(i.second==n){
                v.push_back(i.first);
            }
        }
        return v;
    }
};