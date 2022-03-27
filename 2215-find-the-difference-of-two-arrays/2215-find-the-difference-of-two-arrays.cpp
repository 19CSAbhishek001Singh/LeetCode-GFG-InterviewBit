class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    set<int> s1(nums1.begin(),nums1.end());
    set<int> s2(nums2.begin(),nums2.end());
    vector<int> a,b;
    for(auto x:s1){
        if(!s2.count(x)){
            a.push_back(x);
        }
    }
        for(auto x:s2){
            if(!s1.count(x)){
                b.push_back(x);
            }
        }
        return {a,b};
    }
    
    
    // vector<int> v1, v2;
    // set<int> s1(begin(nums1), end(nums1)), s2(begin(nums2), end(nums2));
    // set_difference(begin(s1), end(s1), begin(s2), end(s2), back_inserter(v1));
    // set_difference(begin(s2), end(s2), begin(s1), end(s1), back_inserter(v2));
    // return {v1, v2};
};