class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mpp(256,-1);
        int left=0,right=0;
        int n=s.size();
        int len=0;
        while(right<n){
            // Checking if we have already seen the element or not
           if(mpp[s[right]]!=-1)
            // If we have seen the number, move the left
            // pointer to position after the right occurrence
            left=max(mpp[s[right]]+1,left);
            // Updating the last seen value of the character
            mpp[s[right]]=right;
            len=max(len,right-left+1);
            right++;
        }
        return len;
    }
};