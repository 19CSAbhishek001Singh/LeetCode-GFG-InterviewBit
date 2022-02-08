class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      int m = nums1.size(),n=nums2.size();
        vector<int> v(m+n);
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),v.begin());
        if((m+n)%2!=0)
            return (double)v[(m+n)/2];
        else
            return (double)(v[((m+n)-1)/2]+v[(m+n)/2])/2.0;
    }
};