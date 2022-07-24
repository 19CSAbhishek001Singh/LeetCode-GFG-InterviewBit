class Solution {
public:
//     bits(num1 OR num2) + bits(num1 AND num2) = bits(num1) + bits(num2)
    long long countExcellentPairs(vector<int>& nums, int k) {
        // to get unique value used unordered set
        unordered_set<int> s(nums.begin(),nums.end());
        // store the count of set bits of each value in vector
        vector<int> v;
        for(auto i: s){
            int x = __builtin_popcountll(i);
            v.push_back(x);
        }
        
        sort(v.begin(),v.end());
        
        long long ans = 0;
        for(int i=0;i<v.size();i++){
            auto it = lower_bound(v.begin(),v.end(),k-v[i]);
            ans += (v.end()-it);
        }
        return ans;
    }
};