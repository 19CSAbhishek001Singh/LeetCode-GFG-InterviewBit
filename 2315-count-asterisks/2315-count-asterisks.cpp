class Solution {
public:
    int countAsterisks(string s) {
        int count=0;
        int ans=0;
        for(int i =0;i<s.length();i++){
            if(count%2==0 && s[i]=='*'){
                ans++;
            }
            if(s[i]=='|'){
                count++;
            }
        }
        return ans;
    }
};