class Solution {
public:
    int rec(int ind1,int ind2,string &text1,string &text2,
    vector<vector<int>>&dp){
        if(ind1<0 || ind2<0) return 0;
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];

        if(text1[ind1]==text2[ind2]){
            return dp[ind1][ind2]=1+rec(ind1-1,ind2-1,text1,text2,dp);
        }
        return dp[ind1][ind2]=max(
            rec(ind1-1,ind2,text1,text2,dp),
            rec(ind1,ind2-1,text1,text2,dp)
        );
    }

    int minDistance(string text1, string text2) {
         int n=text1.size(),m=text2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        return text1.size()+text2.size()-2*rec(n-1,m-1,text1,text2,dp);
    }
};