//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution{
    public:
      bool helper(string w,string p,int i,int j,vector<vector<int>> &dp){

        if(i<0 && j<0)
        return 1;

        if(i<0 && j>=0)
        return 0;

        if(j<0 && i>=0){
            for(int a=0;a<=i;a++){
                if(w[a]!='*')
                return 0;
            }
            return 1;
        }

        if(dp[i][j]!=-1)
        return dp[i][j];

        if(w[i]==p[j] || w[i]=='?')
        return dp[i][j]=helper(w,p,i-1,j-1,dp);

        if(w[i]=='*'){
            return dp[i][j]=helper(w,p,i-1,j,dp) || helper(w,p,i,j-1,dp);
        }
        
        return dp[i][j]=0;
    }

    

    bool match(string w, string p){
        int n=w.length();
        int m=p.length();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return helper(w,p,n-1,m-1,dp);

    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string wild, pattern;
        cin>>wild>>pattern;
        
        Solution ob;
        if(ob.match(wild, pattern))
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}
// } Driver Code Ends