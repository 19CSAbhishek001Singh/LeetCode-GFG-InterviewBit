class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
    int cnt[101]{};
    for(auto i:nums) cnt[i]++;
    int pairs=0, leftover=0;
    for(int i:cnt){
        pairs+= i/2;
        leftover+= i%2;
    }
    return {pairs,leftover};
    }
};