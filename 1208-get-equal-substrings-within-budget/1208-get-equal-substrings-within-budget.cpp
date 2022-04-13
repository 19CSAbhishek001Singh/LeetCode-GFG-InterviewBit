class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
      int i=0,j=0,ans=0,currSum=0;
        while(j<s.length()) {
            while(currSum>maxCost) {
                currSum-=abs(s[i]-t[i]);
                i++;
            }
            currSum+=abs(s[j]-t[j]);
            if(currSum<=maxCost) {
                ans=max(ans,j-i+1);
            }
            j++;
        }
        return ans;   
    }
};