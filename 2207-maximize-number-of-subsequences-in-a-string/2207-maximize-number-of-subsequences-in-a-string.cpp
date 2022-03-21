class Solution {
public:
    long long maximumSubsequenceCount(string text, string pattern) {
        long long p0=0,p1=0,ans=0;
        for(int i=0;i<text.size();i++){
            if(text[i]==pattern[1]){
                ans+=p0;
                p1++;
            }
            if(text[i]==pattern[0]){
                p0++;
            }
        }
        ans+=max(p0,p1);
        return ans;
    }
};