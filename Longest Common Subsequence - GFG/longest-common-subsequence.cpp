//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
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
    int lcs(int x, int y, string text1, string text2)
    {
        vector<vector<int>> dp(x+1,vector<int>(y+1,-1));
        return rec(x-1,y-1,text1,text2,dp);
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends