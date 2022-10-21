//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
    public:
    int mod=1e9+7;
        int rec(int i,int j,string &s,string &t,
           vector<vector<int>>&dp){
        if(j<0) return 1;
        if(i<0) return 0;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(s[i]==t[j]){
            return dp[i][j]=(rec(i-1,j-1,s,t,dp)+rec(i-1,j,s,t,dp))%mod;
        }
        else
            return dp[i][j]=rec(i-1,j,s,t,dp);
    }
    int subsequenceCount(string s, string t)
    {
        int n=s.size(),m=t.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        return rec(n-1,m-1,s,t,dp);
    }
};
 


//{ Driver Code Starts. 

//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
		
		
	}
  
}
// } Driver Code Ends