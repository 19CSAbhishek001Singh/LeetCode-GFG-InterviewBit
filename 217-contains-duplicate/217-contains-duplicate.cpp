class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag=false;
        map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto x:mp){
            if(x.second>=2){
                flag=true;
                break;
            }
        }
        return flag;
    }
};