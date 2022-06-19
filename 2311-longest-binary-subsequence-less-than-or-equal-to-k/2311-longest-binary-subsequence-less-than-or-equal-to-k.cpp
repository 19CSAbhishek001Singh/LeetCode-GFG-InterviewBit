class Solution {
public:
    int longestSubsequence(string s, int k) {
        int n = s.size();
        int ans = 0;
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == '0') ++ans;
            else if (1 <= k){
                ++ans;
                k -= 1;
            }
            k /= 2;
        }
        
        return ans;
    }
};