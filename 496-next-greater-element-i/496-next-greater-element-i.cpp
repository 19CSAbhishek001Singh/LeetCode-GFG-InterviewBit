class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mpp;
        stack<int>st;
        int n=nums2.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&st.top()<nums2[i]){
                st.pop();
            }
            int res=st.empty()?-1:st.top();
            mpp.insert({nums2[i],res});
            st.push(nums2[i]);
        }
        vector<int>ans;
        for(auto i:nums1){
            ans.push_back(mpp[i]);
        }
        return ans;
    }
};