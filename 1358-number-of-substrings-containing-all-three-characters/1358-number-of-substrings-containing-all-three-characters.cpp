class Solution {
public:
    int numberOfSubstrings(string s) {
        map<char, int> mp;
        int l=0, r=0, cnt=0;
        int n = s.size();
        while(r < n) {
            mp[s[r]]++;
            while(mp['a'] && mp['b'] && mp['c']) {
// to count no of substring it can form
 // like a b c a b c when count of a=1 b=1 and c=1 they 
 // can substring with each remaining one like abca abcab abcabc so thats make it 
// count = n-r
                cnt += n-r;
                mp[s[l++]]--;
            }
            r++;
        }
        return cnt;
    }
};