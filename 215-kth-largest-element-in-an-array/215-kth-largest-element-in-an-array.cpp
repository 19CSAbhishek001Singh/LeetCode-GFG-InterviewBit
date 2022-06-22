class Solution {
public:
    int findKthLargest(vector<int>& ints, int k) {
 if (ints.size() < k) {
        exit(-1);
    }
    nth_element(ints.begin(), ints.begin() + k - 1, ints.end(), greater<int>());
    return ints[k - 1];
    }
};