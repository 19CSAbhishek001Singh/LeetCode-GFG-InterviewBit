class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int i,j,n=s.length();
        i=0;
        while(i<n){
            while(i<n && s[i]==' ')
                i++;
            j=i;
            while(j<n && s[j]!=' ')
                j++;
            ans=" "+s.substr(i,j-i)+ans;
            i=j+1;
        }
        i=0;
        while(i<n && ans[i]==' ')
            i++;
        ans=ans.substr(i);
        return ans;
    }
};