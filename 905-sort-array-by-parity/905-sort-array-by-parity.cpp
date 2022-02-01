class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> oe;
        for(auto x:nums){
            if(x%2==0){
                oe.push_back(x);
            }
        }
                for(auto x:nums){
            if(x%2!=0){
                oe.push_back(x);
            }
        }
        return oe;
    }
};